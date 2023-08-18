
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::AttackLw4_exit(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  FighterModuleAccessor *pFVar7;
  ulong uVar8;
  L2CValue *this_01;
  int iVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar7);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar8 = lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,1);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if (-1 < iVar3) {
      iVar9 = -1;
      do {
        lib::L2CValue::L2CValue
                  (aLStack112,
                   iVar9 + _FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0 + 1);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack144,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_ATTACK);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1U) != 0) {
          app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
          iVar4 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL;
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0xc21b85cd4);
          lib::L2CValue::L2CValue(aLStack112,iVar4);
          lib::L2CValue::operator_(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x105a79305b);
          lib::L2CValue::L2CValue(aLStack112,0x3555f47e84);
          lib::L2CValue::operator_(pLVar6,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
          this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0xaa79e68a2);
          lib::L2CValue::operator_(this_01,pLVar6);
          FUN_7100008280(aLStack192,this,aLStack160,aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          iVar4 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack176);
        }
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar3);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::FighterSpecializer_Pikmin::reduce_pikmin_all(pFVar7);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lua2cpp::L2CFighterCommon::sub_attack_s4_uniq_process_exit(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

