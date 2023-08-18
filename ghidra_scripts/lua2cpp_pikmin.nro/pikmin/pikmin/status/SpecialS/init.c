
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::SpecialS_init(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  FighterModuleAccessor *pFVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl(this->moduleAccessor,0.0);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  lib::L2CValue::L2CValue(aLStack80,1);
  pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Pikmin::hold_pikmin(pFVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar7 = lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_SPECIAL_S);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
      iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_SPECIAL_S_START;
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0xc21b85cd4);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0xaa79e68a2);
      lib::L2CValue::operator_(pLVar8,pLVar5);
      FUN_7100008280(aLStack176,this,aLStack144,aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      app::FighterPikminLinkEventWeaponPikminSyncLR::new_l2c_table();
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x2f9f0da252);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x35851bc47);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xaa79e68a2);
      lib::L2CValue::operator_(pLVar8,pLVar5);
      FUN_7100008280(aLStack80,this,aLStack144,aLStack192);
      lib::L2CValue::_L2CValue(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PIKMIN_STATUS_SPECIAL_S_FLAG_IS_HOLD);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

