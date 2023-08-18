
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHiGliding_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  L2CValue *this_01;
  L2CValue *this_02;
  long lVar9;
  BattleObjectModuleAccessor *pBVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined local_b0 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_SE_HANDLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
  ppBVar12 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack288,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_b0);
  lib::L2CValue::L2CValue((L2CValue *)local_b0,-1);
  uVar5 = lib::L2CValue::operator__(aLStack288,(L2CValue *)local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_b0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x11b29c6887);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,fVar13);
    lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack224,0x11489355e4);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer(aLStack224);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,(ulong)pLVar7);
    lib::L2CValue::L2CValue(aLStack192,fVar13);
    lib::L2CAgent::math_max((L2CAgent *)local_b0,aLStack192,pLVar7);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)local_b0,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar13 = (float)app::lua_bind::KineticModule__get_sum_speed_length_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack128,fVar13);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_b0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0xa8affa62b);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack304,fVar13);
    lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0xab6f29972);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack320,fVar13);
    lib::L2CValue::L2CValue(aLStack336,aLStack96);
    lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)local_b0);
    app::lua_bind::SoundModule__set_se_vol_impl(*ppBVar12,iVar3,fVar13,0);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_b0);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100047674;
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_ROT_FLAG);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_b0,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_b0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    pfVar8 = (float *)app::lua_bind::PostureModule__rot_impl(*ppBVar12,0);
    lib::L2CValue::L2CValue(aLStack384,*pfVar8);
    lib::L2CValue::L2CValue(aLStack368,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack352,pfVar8[2]);
    FUN_7100009760(aLStack96,this,aLStack384);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_ROT_ADD_X);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar13);
    lib::L2CValue::operator_(pLVar7,aLStack112);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x162d277af);
    uVar5 = lib::L2CValue::as_number(pLVar7);
    lVar15 = lib::L2CValue::as_number(this_01);
    uVar14 = lib::L2CValue::as_number(this_02);
    local_b0._0_8_ = (void **)(uVar5 & 0xffffffff | lVar15 << 0x20);
    local_b0._8_8_ = (lua_State *)(ulong)uVar14;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar12,(Vector3f *)local_b0,0);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_b0,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_b0);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_b0,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack96,0x16a92b3b83);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)local_b0);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar13);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::L2CValue(aLStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,(float)uVar16);
    pLVar7 = (L2CValue *)(local_b0 + 0x10);
    lib::L2CValue::L2CValue(pLVar7,(float)((ulong)uVar16 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)local_b0);
    lib::L2CValue::L2CValue(aLStack112,pLVar7);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(pLVar7);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack112,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x90);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
LAB_710004694c:
      lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_NONE);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      lib::L2CValue::operator_(pLVar7);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar7);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_DOWN_SIDE);
      lib::L2CValue::L2CValue(aLStack208,aLStack144);
      FUN_7100047da0(aLStack96,this,aLStack192,aLStack208);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_REFLECT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
        lib::L2CValue::L2CValue(aLStack224,iVar3);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar5 = lib::L2CValue::operator_(aLStack96,aLStack224);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        if ((uVar5 & 1) == 0) {
          FUN_710002df40(aLStack224,*ppBVar12);
          lib::L2CValue::L2CValue(aLStack240,aLStack144);
          FUN_7100047da0(aLStack96,this,aLStack224,aLStack240);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack256,_GROUND_TOUCH_FLAG_UP_SIDE);
            lib::L2CValue::L2CValue(aLStack272,aLStack144);
            FUN_7100047da0(aLStack96,this,aLStack256,aLStack272);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            if ((bVar1 & 1U) == 0) goto LAB_710004694c;
            lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_U);
          }
          else {
            lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_LR);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_NONE);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_D);
      }
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack400,_FIGHTER_STATUS_KIND_NONE);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_STATUS_KIND_NONE);
  uVar5 = lib::L2CValue::operator__(aLStack400,(L2CValue *)local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)local_b0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack416,aLStack400);
    lib::L2CValue::L2CValue(aLStack432,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,(L2CValue *)local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x1acc128c5d);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,iVar3);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_b0,pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_b0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack448,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_LANDING);
        lib::L2CValue::L2CValue(aLStack464,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_710004766c;
      }
    }
    lib::L2CValue::L2CValue(aLStack480,false);
    lib::L2CValue::L2CValue(aLStack496,false);
    FUN_7100044d60(this,aLStack480,aLStack496);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_CHANGE_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_CHANGE_LR)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_b0);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_b0);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)local_b0);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_b0);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::mul_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_FIREWORKS);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_b0,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_FIREWORKS);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)local_b0,0);
      uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)local_b0);
      lib::L2CValue::_L2CValue((L2CValue *)local_b0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack112,0x1f7b22ec47);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        uVar6 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)local_b0,iVar3);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
        uVar5 = lib::L2CValue::operator__((L2CValue *)local_b0,pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)local_b0);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack112,0x1ce1d03d96);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,iVar3);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_FIREWORKS);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack112,0x1e3072a280);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,iVar3);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_REFLECT_FRAME);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack112,0x1c9d99e193);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,iVar3);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_DECEL_FRAME);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar3,iVar4);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,0x41f1b251e);
          lib::L2CValue::L2CValue(aLStack96,0x9b7a04434);
          lVar15 = lib::L2CValue::as_integer((L2CValue *)local_b0);
          lVar9 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar12,lVar15,lVar9);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,0);
          lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack128,0xba5070703);
          uVar5 = lib::L2CValue::as_integer(aLStack112);
          uVar6 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::operator_((L2CValue *)local_b0,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
          pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar10,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          uVar5 = lib::L2CValue::operator__((L2CValue *)local_b0,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
            lib::L2CValue::L2CValue(aLStack128,0xb3c0e56b9);
            uVar5 = lib::L2CValue::as_integer(aLStack112);
            uVar6 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            lib::L2CValue::operator_((L2CValue *)local_b0,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            uVar5 = lib::L2CValue::operator__((L2CValue *)local_b0,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)local_b0);
              app::FighterSpecializer_Pickel::sub_material_num(pBVar10,iVar3,iVar4);
              goto LAB_7100047574;
            }
            lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
            lib::L2CValue::L2CValue(aLStack128,0xb4b09662f);
            uVar5 = lib::L2CValue::as_integer(aLStack112);
            uVar6 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            lib::L2CValue::operator_((L2CValue *)local_b0,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            uVar5 = lib::L2CValue::operator__((L2CValue *)local_b0,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)local_b0);
              app::FighterSpecializer_Pickel::sub_material_num(pBVar10,iVar3,iVar4);
              goto LAB_7100047574;
            }
            lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
            lib::L2CValue::L2CValue(aLStack128,0xbd56df38c);
            uVar5 = lib::L2CValue::as_integer(aLStack112);
            uVar6 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            lib::L2CValue::operator_((L2CValue *)local_b0,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar10,iVar3);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            uVar5 = lib::L2CValue::operator__((L2CValue *)local_b0,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((uVar5 & 1) != 0) {
              pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
              pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              iVar4 = lib::L2CValue::as_integer((L2CValue *)local_b0);
              app::FighterSpecializer_Pickel::sub_material_num(pBVar10,iVar3,iVar4);
              goto LAB_7100047574;
            }
          }
          else {
            pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_GRADE_1);
            pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)local_b0);
            app::FighterSpecializer_Pickel::sub_material_num(pBVar10,iVar3,iVar4);
LAB_7100047574:
            lib::L2CValue::_L2CValue(aLStack96);
          }
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack96,0x190c3b7634);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
          HVar11 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar12,iVar3,HVar11,-1);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
          lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_ANIMCMD_SOUND);
          lib::L2CValue::L2CValue(aLStack96,0x18fe62ffcb);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
          HVar11 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar12,iVar3,HVar11,-1);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue((L2CValue *)local_b0);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)local_b0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_ROT_FLAG);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_b0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)local_b0);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_710004766c:
  lib::L2CValue::_L2CValue(aLStack400);
LAB_7100047674:
  lib::L2CValue::_L2CValue(aLStack288);
  return;
}

