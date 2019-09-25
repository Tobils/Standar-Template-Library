# SMART POINTER
knp harus smart pointer ?
karena smart pointer dapat melakukan banyak hal yang tidak bisa dilaukan oleh pointer biasa.conth nya seperti auto destrcutor class saat proses sudah selesai.


**std::auto_ptr** untuk copy satu pointer ke pointer lainnya
The copy constructor and the assignment operator of auto_ptr do not actually copy the stored pointer instead they transfer it, leaving the first auto_ptr object empty. This was one way to implement strict ownership so that only one auto_ptr object can own the pointer at any given time i.e. auto_ptr should not be used where copy semantics are needed.


**std::unique_ptr** untuk memindahkan owner pointer dari 1 pointer ke pointer lainnya.
std::unique_ptr is better and sfare than std::auto_ptr

**shared_ptr**
A shared_ptr is a container for raw pointers. It is a reference counting ownership model i.e. it maintains the reference count of its contained pointer in cooperation with all copies of the shared_ptr. So, the counter is incremented each time a new pointer points to the resource and decremented when the destructor of the object is called.
Reference Counting: It is a technique of storing the number of references, pointers or handles to a resource such as an object, block of memory, disk space or other resources.
An object referenced by the contained raw pointer will not be destroyed until reference count is greater than zero i.e. until all copies of shared_ptr have been deleted.
So, we should use shared_ptr when we want to assign one raw pointer to multiple owners.

**When to use shared_ptr?**
Use shared_ptr if you want to share ownership of a resource. Many shared_ptr can point to a single resource. shared_ptr maintains reference count for this propose. when all shared_ptr’s pointing to resource goes out of scope the resource is destroyed.


sehingga perbedaan antara std::auto_ptr, std::unique_ptr dan std::shared_ptr adalah sebagai berikut :
1. std::auto_ptr digunakan untuk memindahkan ownership pointer dari satu pointer ke pointer lainnya.
2. std::unique_ptr sama seperti std::auto_ptr hanya saja lebih aman dan lebih baik.
3. std::shared_ptr digunakan untuk berbagi resource secara bersama-sama antara beberapa pointer, berbeda dengan std::auto_ptr dan std::unique_ptr yang bergantian untuk ownership resource dan hanya 1 pointer yang boleh owner.
4. std::weak_ptr bisa megakses resource tanpa harus memiliki resource tsb agar tidak terjadi cyclic depndency. 