
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BraveSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Fighter *pFVar7;
  long lVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
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
  
  FUN_710014fe60(aLStack224,this);
  lib::L2CValue::L2CValue(aLStack240,0xa1b1b0ad5);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_S);
  uVar4 = lib::L2CValue::operator__(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_M);
    uVar4 = lib::L2CValue::operator__(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0xdd1d9fd51);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack256,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0xda6decdc7);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack256,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0xd3fd79c7d);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::operator_(aLStack256,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack272,aLStack256);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_SUCCESS_SP);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_SP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar10 = &this->moduleAccessor;
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar11);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_MAX_SP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar11);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,aLStack272);
  lib::L2CValue::L2CValue(aLStack208,aLStack288);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_SP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_MAX_SP);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::_L2CValue(aLStack128);
  uVar4 = lib::L2CValue::operator__(aLStack192,aLStack96);
  if ((uVar4 & 1) == 0) {
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,false);
  }
  else {
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack176,true);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar1 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::operator_(aLStack272);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
    fVar11 = (float)lib::L2CValue::as_number(aLStack96);
    app::FighterSpecializer_Brave::add_sp(pFVar7,fVar11);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_HOP);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_CONTROL_ENERGY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_REVERT_FALL_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_NORMAL_FALL_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_S);
  uVar4 = lib::L2CValue::operator__(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_M);
    uVar4 = lib::L2CValue::operator__(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xaf5156bf9);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xe0547016d);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0xdeddd7d8f);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xa82125b6f);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xe724031fb);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack160,0xd9ada4d19);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
      fVar11 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xa1b1b0ad5);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
    lVar8 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xeeb496041);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
    lVar8 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar10,lVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack160,0xd60d5707a);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,lVar8);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar9 = lib::L2CValue::as_hash(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    fVar12 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,lVar8);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar9 = lib::L2CValue::as_hash(aLStack96);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    fVar12 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (*ppBVar10,HVar9,fVar11,fVar12,(bool)(bVar2 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_7100150090(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,BraveSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

