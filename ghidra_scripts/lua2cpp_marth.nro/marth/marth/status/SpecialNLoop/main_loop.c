
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMarth::status::SpecialNLoop_main_loop(L2CFighterMarth *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        goto LAB_7100019d10;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_710001a3ec;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100019d10;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100019d10:
    lib::L2CValue::L2CValue(aLStack112,0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x12fa41ef06);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                  (*ppBVar9,HVar7,-1.0,1.0,0.0);
        goto LAB_710001a00c;
      }
      lib::L2CValue::L2CValue(aLStack96,0x12fa41ef06);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      fVar11 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0xbb92bf67e);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0xbb92bf67e);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      fVar10 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_MA_MSC_COLOR_BLEND_SET_FLASH_SPEED_RATE);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_module_access::color_blend(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
LAB_710001a3e4:
      pLVar6 = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::GroundModule__correct_impl(*ppBVar9,GVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xeb8131ac9);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack128);
        fVar11 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack144,0xbb92bf67e);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        uVar8 = lib::L2CValue::as_integer(aLStack144);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar8);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        app::lua_bind::MotionModule__set_rate_impl(*ppBVar9,fVar10);
        lib::L2CValue::L2CValue(aLStack128,_MA_MSC_COLOR_BLEND_SET_FLASH_SPEED_RATE);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_module_access::color_blend(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        goto LAB_710001a3e4;
      }
      lib::L2CValue::L2CValue(aLStack96,0xeb8131ac9);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
                (*ppBVar9,HVar7,-1.0,1.0,0.0);
LAB_710001a00c:
      pLVar6 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar6);
LAB_710001a3ec:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ControlModule__check_button_off_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CHARGE_MAX);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710001a504;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_KIND_SPECIAL_N_END_MAX);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_KIND_SPECIAL_N_END);
    lib::L2CValue::L2CValue(aLStack112,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710001a504:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

