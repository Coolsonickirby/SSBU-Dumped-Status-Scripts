
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::FinalEnd_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Fighter *pFVar9;
  BattleObjectModuleAccessor *pBVar10;
  ulong uVar11;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x80));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) goto LAB_7100015a34;
    }
    iVar5 = 1;
    goto LAB_7100016230;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100015a34:
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_GROUND_CORRECT_SET);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      bVar4 = false;
LAB_7100015bf0:
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_INSTANCE_WORK_ID_FLAG_FINAL_STATUS);
      iVar5 = lib::L2CValue::as_integer(aLStack208);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar11 = lib::L2CValue::operator__(aLStack192,aLStack96);
      uVar11 = uVar11 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      if (bVar4) goto LAB_7100015c58;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_GROUND_CORRECT_ON);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar7 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar4 = true;
      uVar11 = 1;
      if ((uVar7 & 1) == 0) goto LAB_7100015bf0;
LAB_7100015c58:
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar11 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_GROUND_CORRECT_SET);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_GROUND_CORRECT_ON);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x92ee4d34c);
      lib::L2CValue::L2CValue(aLStack128,0xdf3b40b09);
      lib::L2CValue::L2CValue(aLStack192,true);
      lib::L2CValue::L2CValue(aLStack224,aLStack112);
      lib::L2CValue::L2CValue(aLStack240,aLStack128);
      lib::L2CValue::L2CValue(aLStack256,aLStack192);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack288,FIGHTER_KINETIC_TYPE_MOTION);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
      lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                (this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_GROUND_CORRECT_SET);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_FINAL_MODULE_END_EXEC);
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::FighterSpecializer_Brave::call_final_module(pFVar9,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    app::KineticUtility::clear_unable_energy(iVar5,pBVar10);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x70;
      goto LAB_7100016224;
    }
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL_DONE);
    iVar5 = lib::L2CValue::as_integer(aLStack320);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL_DONE);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar6 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
      }
      goto LAB_7100015be4;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x50),(L2CValue)(cVar1 + -0x60));
    }
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100015be4:
    lVar2 = -0x50;
LAB_7100016224:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  iVar5 = 0;
LAB_7100016230:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

