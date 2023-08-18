
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialSEnd_main(L2CFighterMetaknight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  L2CValue *this_00;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0x121f8c2192);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_END_WORK_INT_ROT_COMP_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_END_WORK_FLAG_SITUATION_AIR)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdb8bd3614);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
  lVar8 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_WORK_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1158d0953d);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
    lVar8 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1402637e28);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
    lVar8 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1402637e28);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    lVar8 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,lVar8);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    fVar12 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_WORK_FLAG_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar3);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,lVar8);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_70);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    fVar12 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_WORK_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0xf28d9d8fa);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack208,0xf5fdee86c);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack176,fVar11);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    uVar6 = lib::L2CValue::as_number(aLStack128);
    lVar8 = lib::L2CValue::as_number(aLStack176);
    uVar13 = lib::L2CValue::as_number(aLStack224);
    local_70 = uVar6 & 0xffffffff | lVar8 << 0x20;
    uStack104 = (ulong)uVar13;
    app::lua_bind::KineticModule__add_speed_impl(*ppBVar10,(Vector3f *)&local_70);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_STATUS_TRANSITION_TERM_ID_WAIT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__enable_transition_term_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,SpecialSEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  return;
}

