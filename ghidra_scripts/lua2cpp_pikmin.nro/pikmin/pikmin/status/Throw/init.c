
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPikmin::status::Throw_init(L2CFighterPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  ulong uVar9;
  long lVar10;
  L2CValue *this_00;
  void *pvVar11;
  BattleObjectModuleAccessor *pBVar12;
  float fVar13;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack128,0x50000000);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar8);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0);
  uVar9 = lib::L2CValue::operator_(aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar9 & 1) == 0) goto LAB_71000080cc;
  lib::L2CValue::L2CValue(aLStack128,1);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if (-1 < iVar3) {
    iVar4 = -1;
    do {
      lib::L2CValue::L2CValue
                (aLStack128,
                 iVar4 + _FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0 + 1);
      iVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack160,iVar5);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_CATCH_WAIT_WORK_FLAG_THROW_F);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        lVar10 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack192,lVar10);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,0x74e9acdb1);
        uVar9 = lib::L2CValue::operator__(aLStack192,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar9 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0x749f709a8);
          uVar9 = lib::L2CValue::operator__(aLStack192,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_WEAPON_PIKMIN_PIKMIN_STATUS_CATCH_WAIT_WORK_FLAG_THROW_F);
            lib::L2CValue::operator_(aLStack176,aLStack128);
            goto LAB_7100007dc4;
          }
          lib::L2CValue::L2CValue(aLStack128,0x8a0abc72c);
          uVar9 = lib::L2CValue::operator__(aLStack192,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_WEAPON_PIKMIN_PIKMIN_STATUS_CATCH_WAIT_WORK_FLAG_THROW_HI);
            lib::L2CValue::operator_(aLStack176,aLStack128);
            goto LAB_7100007dc4;
          }
          lib::L2CValue::L2CValue(aLStack128,0x83ec83f4b);
          uVar9 = lib::L2CValue::operator__(aLStack192,aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_WEAPON_PIKMIN_PIKMIN_STATUS_CATCH_WAIT_WORK_FLAG_THROW_LW);
            lib::L2CValue::operator_(aLStack176,aLStack128);
            goto LAB_7100007dc4;
          }
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack128,_WEAPON_PIKMIN_PIKMIN_STATUS_CATCH_WAIT_WORK_FLAG_THROW_B);
          lib::L2CValue::operator_(aLStack176,aLStack128);
LAB_7100007dc4:
          lib::L2CValue::_L2CValue(aLStack128);
        }
        app::FighterPikminLinkEventWeaponPikminOnFlag::new_l2c_table();
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack128,0x2f7461c6a0);
        lib::L2CValue::operator_(pLVar7,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x911f74197);
        lib::L2CValue::operator_(pLVar7,aLStack176);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
        this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0xaa79e68a2);
        lib::L2CValue::operator_(this_00,pLVar7);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        FUN_7100008280(aLStack224,this,aLStack128,aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
  fVar13 = (float)lib::L2CValue::as_number(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::sv_battle_object::is_null(uVar6);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar9 = lib::L2CValue::operator__(aLStack176,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar9 & 1) == 0) {
    pLVar7 = aLStack176;
LAB_71000080c0:
    lib::L2CValue::_L2CValue(pLVar7);
  }
  else {
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::sv_battle_object::is_active(uVar6);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar6);
      if (pvVar11 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar11);
      }
      pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      bVar1 = app::lua_bind::CatchModule__is_catch_impl(pBVar12);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack192,false);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
        uVar6 = app::lua_bind::CatchModule__capture_object_id_impl(pBVar12,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack176,uVar6);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar4 = lib::L2CValue::as_integer(aLStack192);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      pLVar7 = aLStack128;
      goto LAB_71000080c0;
    }
  }
  lib::L2CValue::_L2CValue(aLStack160);
LAB_71000080cc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

