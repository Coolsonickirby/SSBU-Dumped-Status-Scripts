
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikmin::status::CatchTurn_init(L2CFighterPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  void *pvVar11;
  ulong uVar12;
  BattleObjectModuleAccessor *pBVar13;
  int iVar14;
  float fVar15;
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,1.0);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE);
  fVar15 = (float)lib::L2CValue::as_number(aLStack136);
  iVar4 = lib::L2CValue::as_integer(aLStack152);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar4);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CHANGE_CATCH_MOTION_RATE)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_PIKMIN_CATCH_DASH_STATUS)
  ;
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  lib::L2CValue::L2CValue(aLStack136,3);
  pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  app::FighterSpecializer_Pikmin::hold_pikmin(pFVar8,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::FighterSpecializer_Pikmin::update_hold_pikmin_param(pFVar8);
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack152,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,0);
  uVar9 = lib::L2CValue::operator_(aLStack136,aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_STATUS_CATCH_FLAG_ONE_MAN_SHOW);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    pLVar7 = aLStack136;
    goto LAB_7100006de8;
  }
  lib::L2CValue::L2CValue(aLStack136,1);
  lib::L2CValue::operator_(aLStack152,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  iVar4 = lib::L2CValue::as_integer(aLStack168);
  lib::L2CValue::_L2CValue(aLStack168);
  if (-1 < iVar4) {
    iVar14 = 0;
    do {
      lib::L2CValue::L2CValue
                (aLStack136,
                 iVar14 + _FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
      iVar5 = lib::L2CValue::as_integer(aLStack136);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack168,iVar5);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::L2CValue(aLStack184,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
      iVar5 = lib::L2CValue::as_integer(aLStack184);
      uVar6 = lib::L2CValue::as_integer(aLStack168);
      bVar2 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack136,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack184);
      if ((bVar3 & 1U) != 0) {
        app::FighterPikminLinkEventWeaponPikminChangeStatus::new_l2c_table();
        iVar1 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_START_SUB;
        iVar5 = _WEAPON_PIKMIN_PIKMIN_STATUS_KIND_CATCH_START;
        if (iVar14 == 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0xc21b85cd4);
          lib::L2CValue::L2CValue(aLStack136,iVar5);
          lib::L2CValue::operator_(pLVar7,aLStack136);
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0xc21b85cd4);
          lib::L2CValue::L2CValue(aLStack136,iVar1);
          lib::L2CValue::operator_(pLVar7,aLStack136);
        }
        lib::L2CValue::_L2CValue(aLStack136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack136,0x3555f47e84);
        lib::L2CValue::operator_(pLVar7,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0xaa79e68a2);
        lib::L2CValue::operator_(pLVar10,pLVar7);
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        FUN_7100008280(aLStack200,this,aLStack136,aLStack184);
        lib::L2CValue::_L2CValue(aLStack200);
        lib::L2CValue::_L2CValue(aLStack136);
        fVar15 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack216,fVar15);
        iVar5 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack232,iVar5);
        lib::L2CValue::L2CValue(aLStack136,FIGHTER_STATUS_KIND_CATCH_TURN);
        uVar9 = lib::L2CValue::operator__(aLStack232,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue(aLStack232);
        if ((uVar9 & 1) != 0) {
          lib::L2CValue::operator_(aLStack216);
          lib::L2CValue::operator_(aLStack216,aLStack136);
          lib::L2CValue::_L2CValue(aLStack136);
        }
        app::FighterPikminLinkEventWeaponPikminSyncLR::new_l2c_table();
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack136,0x2f9f0da252);
        lib::L2CValue::operator_(pLVar7,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0x35851bc47);
        lib::L2CValue::operator_(pLVar7,aLStack216);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack232,0xaa79e68a2);
        lib::L2CValue::operator_(pLVar10,pLVar7);
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        FUN_7100008280(aLStack248,this,aLStack136,aLStack232);
        lib::L2CValue::_L2CValue(aLStack248);
        lib::L2CValue::_L2CValue(aLStack136);
        app::FighterPikminLinkEventWeaponPikminSetInt::new_l2c_table();
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x105a79305b);
        lib::L2CValue::L2CValue(aLStack136,0x2f8007f61d);
        lib::L2CValue::operator_(pLVar7,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0xba386e627);
        lib::L2CValue::L2CValue(aLStack136,iVar14);
        lib::L2CValue::operator_(pLVar7,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        iVar5 = _WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HOLD_INDEX;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x8386c9ce7);
        lib::L2CValue::L2CValue(aLStack136,iVar5);
        lib::L2CValue::operator_(pLVar7,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0xaa79e68a2);
        lib::L2CValue::operator_(pLVar10,pLVar7);
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        FUN_7100008280(aLStack280,this,aLStack136,aLStack264);
        lib::L2CValue::_L2CValue(aLStack280);
        lib::L2CValue::_L2CValue(aLStack136);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0xba386e627);
        lib::L2CValue::operator_(pLVar7,aLStack152);
        iVar5 = _WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HOLD_NUM;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x8386c9ce7);
        lib::L2CValue::L2CValue(aLStack136,iVar5);
        lib::L2CValue::operator_(pLVar7,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        FUN_7100008280(aLStack296,this,aLStack136,aLStack264);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_LINK_NO_PIKMIN_THROW);
        iVar5 = lib::L2CValue::as_integer(aLStack136);
        app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack184);
      }
      lib::L2CValue::_L2CValue(aLStack168);
      bVar3 = iVar14 < iVar4;
      iVar14 = iVar14 + 1;
    } while (bVar3);
  }
  lib::L2CValue::L2CValue
            (aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
  iVar4 = lib::L2CValue::as_integer(aLStack136);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack168,iVar4);
  lib::L2CValue::_L2CValue(aLStack136);
  uVar6 = lib::L2CValue::as_integer(aLStack168);
  pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar6);
  if (pvVar11 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack184,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack184,pvVar11);
  }
  lib::L2CValue::L2CValue(aLStack136,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack232,0x13c86a4307);
  uVar9 = lib::L2CValue::as_integer(aLStack136);
  uVar12 = lib::L2CValue::as_integer(aLStack232);
  pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack184);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar13,uVar9,uVar12);
  lib::L2CValue::L2CValue(aLStack216,fVar15);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack264,0x13bf6d7391);
  uVar9 = lib::L2CValue::as_integer(aLStack136);
  uVar12 = lib::L2CValue::as_integer(aLStack264);
  pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack184);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar13,uVar9,uVar12);
  lib::L2CValue::L2CValue(aLStack232,fVar15);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,3);
  uVar9 = lib::L2CValue::operator__(aLStack152,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack136,2);
    uVar9 = lib::L2CValue::operator__(aLStack152,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack136,0.0);
      lib::L2CValue::operator_(aLStack232,aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE);
      fVar15 = (float)lib::L2CValue::as_number(aLStack264);
      iVar4 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar4);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack264);
      lib::L2CValue::L2CValue
                (aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CHANGE_CATCH_MOTION_RATE);
      iVar4 = lib::L2CValue::as_integer(aLStack136);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      goto LAB_7100006dc4;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack136,0.0);
    lib::L2CValue::operator_(aLStack216,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE);
    fVar15 = (float)lib::L2CValue::as_number(aLStack264);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar4);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::L2CValue
              (aLStack136,_FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CHANGE_CATCH_MOTION_RATE);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
LAB_7100006dc4:
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack184);
  pLVar7 = aLStack168;
LAB_7100006de8:
  lib::L2CValue::_L2CValue(pLVar7);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

