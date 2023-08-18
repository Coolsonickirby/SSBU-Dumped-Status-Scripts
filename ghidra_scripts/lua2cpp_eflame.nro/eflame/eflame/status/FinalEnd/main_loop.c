
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::FinalEnd_main_loop(L2CFighterEflame *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  Fighter *pFVar10;
  L2CValue *this_00;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710000d230:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lVar2 = -0x40;
LAB_710000d3cc:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
      goto LAB_710000d3d0;
    }
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      bVar4 = false;
LAB_710000d3e8:
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_FINAL_STATUS);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      if (bVar4) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_710000d474;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELEMENT_STATUS_FINAL_FLAG_GROUND_CORRECT_ON);
      iVar6 = lib::L2CValue::as_integer(aLStack144);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        bVar4 = true;
        goto LAB_710000d3e8;
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710000d474:
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_STATUS_FINAL_FLAG_GROUND_CORRECT_ON);
      iVar6 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0xcb7cea62c);
      lib::L2CValue::L2CValue(aLStack176,0x10e315f739);
      lib::L2CValue::L2CValue(aLStack192,true);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack224,FIGHTER_KINETIC_TYPE_MOTION);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
      lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                (this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar6 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar6);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    this_00 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_FINAL_MODULE_END_EXEC);
      pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
      iVar6 = lib::L2CValue::as_integer(aLStack80);
      app::FighterSpecializer_EFlame::call_final_module(pFVar10,iVar6);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar6 = lib::L2CValue::as_integer(aLStack80);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
    app::KineticUtility::clear_unable_energy(iVar6,pBVar8);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar4 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x70));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar2 = -0x50;
      goto LAB_710000d3cc;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) goto LAB_710000d230;
LAB_710000d3d0:
    bVar4 = true;
  }
  lib::L2CValue::L2CValue(aLStack256,bVar4);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack256,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_VISUAL_SCENE_FLAG_END_EXIT);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar4 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lVar2 = -0x70;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_VISUAL_SCENE_FLAG_END_EXIT_FINISH);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) goto LAB_710000d8f0;
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_FINAL_MODULE_END_EXIT);
      pFVar10 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
      iVar6 = lib::L2CValue::as_integer(aLStack80);
      app::FighterSpecializer_EFlame::call_final_module(pFVar10,iVar6);
      lVar2 = -0x40;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
LAB_710000d8f0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

