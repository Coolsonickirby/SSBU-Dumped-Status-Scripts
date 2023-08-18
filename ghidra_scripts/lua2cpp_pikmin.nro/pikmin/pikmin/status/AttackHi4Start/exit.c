
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::AttackHi4Start_exit(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  FighterModuleAccessor *pFVar6;
  ulong uVar7;
  L2CValue *this_01;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar6);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_HI4_HOLD);
  uVar7 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI4);
    uVar7 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar7 = lib::L2CValue::operator_(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
          iVar3 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL;
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xc21b85cd4);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x105a79305b);
          lib::L2CValue::L2CValue(aLStack80,0x3555f47e84);
          lib::L2CValue::operator_(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xaa79e68a2);
          lib::L2CValue::operator_(this_01,pLVar5);
          FUN_7100008280(aLStack80,this,aLStack128,aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack144);
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        app::FighterSpecializer_Pikmin::reduce_pikmin_all(pFVar6);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

