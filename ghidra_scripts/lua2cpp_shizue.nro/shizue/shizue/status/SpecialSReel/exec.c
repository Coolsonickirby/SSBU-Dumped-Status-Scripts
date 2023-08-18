
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSReel_exec(L2CFighterShizue *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
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
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_MOTION_VALUE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack160,0xd82ac3b42);
  pLVar3 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack96,pLVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CAgent::math_cos((L2CAgent *)aLStack128,pLVar3);
  lib::L2CAgent::math_sin((L2CAgent *)aLStack128,pLVar3);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::L2CValue(aLStack96,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
  lib::L2CValue::L2CValue(aLStack208,pLVar3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
  lib::L2CValue::L2CValue(aLStack224,pLVar3);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lib::L2CValue::L2CValue(aLStack272,aLStack144);
  lua2cpp::L2CFighterBase::Vector2__dot(this,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::operator_(aLStack240,aLStack112);
  lib::L2CValue::L2CValue(aLStack320,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack336,0xd8991442e);
  uVar4 = lib::L2CValue::as_integer(aLStack320);
  uVar5 = lib::L2CValue::as_integer(aLStack336);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack304,fVar8);
  lib::L2CValue::operator_(aLStack96,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack112,aLStack288);
  pLVar3 = aLStack96;
  lib::L2CValue::operator_(aLStack112,pLVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_MOTION_VALUE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack320);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack320);
  fVar8 = (float)app::lua_bind::MotionModule__prev_weight_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack320,fVar8);
  lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack352,0xcaaf0851e);
  uVar4 = lib::L2CValue::as_integer(aLStack336);
  uVar5 = lib::L2CValue::as_integer(aLStack352);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  uVar4 = lib::L2CValue::operator_(aLStack304,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack336,lVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack352,0);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack368,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_LW);
      iVar2 = lib::L2CValue::as_integer(aLStack368);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,lVar6);
      lib::L2CValue::operator_(aLStack352,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack368,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_HI);
      iVar2 = lib::L2CValue::as_integer(aLStack368);
      lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,lVar6);
      lib::L2CValue::operator_(aLStack352,aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack368);
    uVar4 = lib::L2CValue::operator__(aLStack352,aLStack336);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,1.0);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar8,true);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      fVar8 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack368,fVar8);
      lib::L2CValue::L2CValue(aLStack384,true);
      HVar7 = lib::L2CValue::as_hash(aLStack352);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      fVar9 = (float)lib::L2CValue::as_number(aLStack368);
      bVar1 = lib::L2CValue::as_bool(aLStack384);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),1.0);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
      lVar6 = lib::L2CValue::as_integer(aLStack352);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack96,aLStack304);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack384,aLStack320);
    fVar8 = (float)lib::L2CValue::as_number(aLStack368);
    app::lua_bind::MotionModule__set_weight_rate_impl(this->moduleAccessor,fVar8);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar3 = aLStack336;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar8,true);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::operator_(aLStack96,aLStack320);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack336);
    app::lua_bind::MotionModule__set_weight_rate_impl(this->moduleAccessor,fVar8);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND)
    ;
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar3 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

