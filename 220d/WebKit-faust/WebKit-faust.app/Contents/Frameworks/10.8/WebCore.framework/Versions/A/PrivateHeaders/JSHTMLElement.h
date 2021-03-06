/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLElement_h
#define JSHTMLElement_h

#include "HTMLElement.h"
#include "JSDOMBinding.h"
#include "JSElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLElement : public JSElement {
public:
    typedef JSElement Base;
    static JSHTMLElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLElement> impl)
    {
        JSHTMLElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLElement>(globalObject->globalData().heap)) JSHTMLElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    JSC::ScopeChainNode* pushEventHandlerScope(JSC::ExecState*, JSC::ScopeChainNode*) const;

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
#if ENABLE(MICRODATA)
    JSC::JSValue itemValue(JSC::ExecState*) const;
#endif
#if ENABLE(MICRODATA)
    void setItemValue(JSC::ExecState*, JSC::JSValue);
#endif
    HTMLElement* impl() const
    {
        return static_cast<HTMLElement*>(Base::impl());
    }
protected:
    JSHTMLElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

HTMLElement* toHTMLElement(JSC::JSValue);

class JSHTMLElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLElementPrototype>(globalData.heap)) JSHTMLElementPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSHTMLElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLElementConstructor : public DOMConstructorObject {
private:
    JSHTMLElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLElementConstructor>(*exec->heap())) JSHTMLElementConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentElement(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentHTML(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionInsertAdjacentText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLElementPrototypeFunctionClick(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLElementId(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementId(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementTitle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementTitle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementLang(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementLang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementTranslate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementTranslate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementDir(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementDir(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementTabIndex(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementTabIndex(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementDraggable(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementDraggable(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementWebkitdropzone(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementWebkitdropzone(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementHidden(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementHidden(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementAccessKey(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementInnerHTML(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementInnerHTML(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementInnerText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementInnerText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementOuterHTML(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementOuterHTML(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementOuterText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementOuterText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementChildren(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLElementContentEditable(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementContentEditable(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLElementIsContentEditable(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLElementSpellcheck(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementSpellcheck(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(MICRODATA)
JSC::JSValue jsHTMLElementItemScope(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementItemScope(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(MICRODATA)
JSC::JSValue jsHTMLElementItemType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(MICRODATA)
JSC::JSValue jsHTMLElementItemId(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementItemId(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
#if ENABLE(MICRODATA)
JSC::JSValue jsHTMLElementItemRef(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(MICRODATA)
JSC::JSValue jsHTMLElementItemProp(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(MICRODATA)
JSC::JSValue jsHTMLElementItemValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLElementItemValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsHTMLElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
