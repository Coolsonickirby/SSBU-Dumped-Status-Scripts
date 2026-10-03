
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001bbf0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  ItemCommonParamInt IVar3;
  Item *pIVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_ITEM_AREA_KIND_PICKUP);
  pIVar4 = (Item *)lib::L2CValue::as_pointer(param_2);
  pvVar5 = (void *)app::lua_bind::Item__item_module_accessor_impl(pIVar4);
  lib::L2CValue::L2CValue(aLStack112,pvVar5);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::AreaModule__is_enable_area_impl(pBVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar7 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_ITEM_COMMON_PARAM_INT_SIZE_KIND);
    IVar3 = lib::L2CValue::as_integer(aLStack64);
    pIVar4 = (Item *)lib::L2CValue::as_pointer(param_2);
    iVar2 = app::lua_bind::Item__common_param_int_impl(pIVar4,IVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_ITEM_SIZE_KIND_SMALL);
    uVar7 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar7 & 1) != 0) {
      bVar1 = app::lua_bind::ItemModule__is_have_item_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar7 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        app::lua_bind::ItemModule__drop_item_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),90.0,0.0,0);
      }
      pIVar4 = (Item *)lib::L2CValue::as_pointer(param_2);
      bVar1 = app::lua_bind::ItemModule__have_item_instance_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),pIVar4,0,false,true,false,
                         false);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      return;
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  pIVar4 = (Item *)lib::L2CValue::as_pointer(param_2);
  app::lua_bind::Item__end_hooked_impl(pIVar4);
  return;
}

