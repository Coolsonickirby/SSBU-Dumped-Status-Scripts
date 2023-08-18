
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootAir_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  Fighter *pFVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  
  ppBVar10 = &this->moduleAccessor;
  app::lua_bind::ControlModule__reset_flick_y_impl(*ppBVar10);
  app::lua_bind::ControlModule__reset_flick_sub_y_impl(*ppBVar10);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
  lib::L2CValue::L2CValue(aLStack112,0xfe);
  lib::L2CValue::operator_(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    app::lua_bind::ControlModule__reset_trigger_impl(*ppBVar10);
  }
  app::lua_bind::ControlModule__clear_command_impl(*ppBVar10,false);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_F);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_710000e06c;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_WALK_B);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_710000e06c;
  }
  else {
LAB_710000e06c:
    lua2cpp::L2CFighterCommon::sub_set_pass(this);
  }
  lib::L2CValue::L2CValue(aLStack128,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  HVar7 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack144,HVar7);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_UNIQ);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_JUMP_SQUAT);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KINETIC_TYPE_FLY);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLAG_DAMAGE_FLY_AIR);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,aLStack112);
      FUN_7100029d50(this,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack208,0x12f7d28e2f);
      HVar7 = lib::L2CValue::as_hash(aLStack208);
      iVar4 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar10,HVar7,false,false,false);
      lib::L2CValue::L2CValue(aLStack192,iVar4);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack208,0x1826dc417b);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack256,0x1988a59fee);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack256);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack240,fVar11);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
  fVar11 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  uVar6 = lib::L2CValue::operator__(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x1de0b1705d);
    lib::L2CValue::operator_(aLStack208,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
  iVar4 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack224,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack256,0x1454acacb0);
  lib::L2CValue::L2CValue(aLStack272,0x1454acacb0);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar6 = lib::L2CValue::operator__(aLStack224,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::L2CValue(aLStack304,false);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack288);
    bVar1 = lib::L2CValue::as_bool(aLStack304);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar10,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  else {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack304);
    HVar7 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack288,HVar7);
    lib::L2CValue::L2CValue(aLStack112,0x1a793b0b2f);
    uVar6 = lib::L2CValue::operator__(aLStack288,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar6 & 1) == 0) {
      HVar7 = lib::L2CValue::as_hash(aLStack208);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar7,-1.0,1.0,0.0,false,false);
      goto LAB_710000e6bc;
    }
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack288);
    fVar11 = (float)app::lua_bind::MotionModule__frame_partial_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    lib::L2CValue::_L2CValue(aLStack288);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (*ppBVar10,HVar7,fVar11,1.0,0.0,false,false);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack288);
    app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar10,iVar4,false);
  }
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710000e6bc:
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl(*ppBVar10,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack288,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack288);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
  iVar4 = lib::L2CValue::as_integer(aLStack320);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack304,iVar4);
  uVar6 = lib::L2CValue::operator_(aLStack112,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar6 & 1) != 0) {
    FUN_7100028800(this);
  }
  FUN_71000259e0(this);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar9,false);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
  iVar4 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((bVar2 & 1U) != 0) {
    FUN_710002a000(this);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SpecialNShootAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

