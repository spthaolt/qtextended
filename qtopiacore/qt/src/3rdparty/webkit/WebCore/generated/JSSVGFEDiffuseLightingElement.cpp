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

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEDiffuseLightingElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDiffuseLightingElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFEDiffuseLightingElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "surfaceScale", JSSVGFEDiffuseLightingElement::SurfaceScaleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGFEDiffuseLightingElement::YAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "x", JSSVGFEDiffuseLightingElement::XAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEDiffuseLightingElementTableEntries[13] },
    { "in1", JSSVGFEDiffuseLightingElement::In1AttrNum, DontDelete|ReadOnly, 0, &JSSVGFEDiffuseLightingElementTableEntries[14] },
    { "diffuseConstant", JSSVGFEDiffuseLightingElement::DiffuseConstantAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEDiffuseLightingElementTableEntries[12] },
    { "style", JSSVGFEDiffuseLightingElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "kernelUnitLengthY", JSSVGFEDiffuseLightingElement::KernelUnitLengthYAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "kernelUnitLengthX", JSSVGFEDiffuseLightingElement::KernelUnitLengthXAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "width", JSSVGFEDiffuseLightingElement::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "height", JSSVGFEDiffuseLightingElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "result", JSSVGFEDiffuseLightingElement::ResultAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEDiffuseLightingElementTableEntries[15] },
    { "className", JSSVGFEDiffuseLightingElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEDiffuseLightingElementTable = 
{
    2, 16, JSSVGFEDiffuseLightingElementTableEntries, 12
};

/* Hash table for prototype */

static const HashEntry JSSVGFEDiffuseLightingElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGFEDiffuseLightingElementPrototypeTable = 
{
    2, 1, JSSVGFEDiffuseLightingElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGFEDiffuseLightingElementPrototype::info = { "SVGFEDiffuseLightingElementPrototype", 0, &JSSVGFEDiffuseLightingElementPrototypeTable, 0 };

JSObject* JSSVGFEDiffuseLightingElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFEDiffuseLightingElementPrototype>(exec, "[[JSSVGFEDiffuseLightingElement.prototype]]");
}

const ClassInfo JSSVGFEDiffuseLightingElement::info = { "SVGFEDiffuseLightingElement", &JSSVGElement::info, &JSSVGFEDiffuseLightingElementTable, 0 };

JSSVGFEDiffuseLightingElement::JSSVGFEDiffuseLightingElement(ExecState* exec, SVGFEDiffuseLightingElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFEDiffuseLightingElementPrototype::self(exec));
}

bool JSSVGFEDiffuseLightingElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDiffuseLightingElement, JSSVGElement>(exec, &JSSVGFEDiffuseLightingElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEDiffuseLightingElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case SurfaceScaleAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->surfaceScaleAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case DiffuseConstantAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->diffuseConstantAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case KernelUnitLengthXAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthXAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case KernelUnitLengthYAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthYAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case XAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case YAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case WidthAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case HeightAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ResultAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ClassNameAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case StyleAttrNum: {
        SVGFEDiffuseLightingElement* imp = static_cast<SVGFEDiffuseLightingElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)