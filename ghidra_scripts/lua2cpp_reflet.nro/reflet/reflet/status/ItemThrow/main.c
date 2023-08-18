
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::ItemThrow_main(L2CFighterReflet *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  FighterModuleAccessor *pFVar5;
  ulong uVar6;
  long lVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE);
  pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::FighterSpecializer_Reflet::get_magickind(pFVar5,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_TEMP_MAGIC_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_SWORD);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,-1);
    uVar6 = lib::L2CValue::operator__(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE);
      pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::FighterSpecializer_Reflet::set_flag_to_table(pFVar5,iVar2,(bool)(bVar1 & 1),iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1579bbe8d8);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1579bbe8d8);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND_OPPOSITE);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      app::lua_bind::CancelModule__enable_cancel_impl(this->moduleAccessor);
    }
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_SWORD);
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE);
    pFVar5 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::FighterSpecializer_Reflet::set_flag_to_table(pFVar5,iVar2,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1579bbe8d8);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1579bbe8d8);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_ITEM_THROW_WORK_INT_MOTION_KIND_OPPOSITE);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    app::lua_bind::CancelModule__enable_cancel_impl(this->moduleAccessor);
  }
  lua2cpp::L2CFighterCommon::status_ItemThrow(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

