
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023540(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  ItemCommonParamInt IVar3;
  Item *pIVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_ITEM_AREA_KIND_PICKUP);
  pIVar4 = (Item *)lib::L2CValue::as_pointer(param_3);
  pvVar5 = (void *)app::lua_bind::Item__item_module_accessor_impl(pIVar4);
  lib::L2CValue::L2CValue(aLStack128,pvVar5);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
  bVar1 = app::lua_bind::AreaModule__is_enable_area_impl(pBVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_ITEM_COMMON_PARAM_INT_SIZE_KIND);
    IVar3 = lib::L2CValue::as_integer(aLStack80);
    pIVar4 = (Item *)lib::L2CValue::as_pointer(param_3);
    iVar2 = app::lua_bind::Item__common_param_int_impl(pIVar4,IVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_ITEM_SIZE_KIND_SMALL);
    uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      bVar1 = app::lua_bind::ItemModule__is_have_item_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        app::lua_bind::ItemModule__drop_item_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),90.0,0.0,0);
      }
      pIVar4 = (Item *)lib::L2CValue::as_pointer(param_3);
      bVar1 = app::lua_bind::ItemModule__have_item_instance_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),pIVar4,0,false,true,false,
                         false);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(param_1,0);
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  pIVar4 = (Item *)lib::L2CValue::as_pointer(param_3);
  app::lua_bind::Item__end_hooked_impl(pIVar4);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

