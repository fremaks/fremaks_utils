#ifndef __FMS_QUEUE_H__
#define __FMS_QUEUE_H__

#ifdef __cplusplus
extern  "C"
{
#endif

typedef struct _fms_list {
	struct _fms_list *prev;
	struct _fms_list *next;
} fms_list;

inline fms_void fms_list_init(fms_list *const list) {
	list->prev = list->next = list;
}

inline fms_void fms_list_add_head(fms_list *const head, fms_list *const list) {
	list->next = head->next;
	head->next->prev = list;
	head->next = list;
	list->prev = head;
}

inline fms_void fms_list_add_tail(fms_list *const head, fms_list *const list) {
	list->prev = head->prev;
	head->prev->next = list;
	head->prev = list;
	list->next = head;
}

inline fms_void fms_list_del(fms_list *const list) {
	list->next->prev = list->prev;
	list->prev->next = list->next;
}

inline const fms_bool fms_list_is_empty(const fms_list *const head) {
	return head->next == head;
}

inline fms_list *fms_list_prev(const fms_list *const list) {
	return list->prev;
}

inline fms_list *fms_list_next(const fms_list *const list) {
	return list->next;
}


inline const fms_bool fms_list_is_loop(const fms_list *const head, const fms_list *const list) {
	return list != head;
}


#define fms_list_data(ptr, type, member) \
	((type *)((fms_s8 *)(ptr)-(fms_uintptr)(&((type *)0)->member)))
	


#ifdef __cplusplus
}
#endif



#endif
