
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackWalk_init(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack128,0xee2ec2860);
  lib::L2CValue::L2CValue(aLStack144,0);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::L2CValue(aLStack176,0xc1f106e8d);
  lib::L2CValue::L2CValue(aLStack192,0x1255dee7b4);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::operator_(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_WALK);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x15e235c32d);
    lib::L2CValue::L2CValue(aLStack128,0x171c51ff07);
    lib::L2CValue::L2CValue(aLStack144,0x15f254fb34);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common_param
              (this,(L2CValue)0xa0,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,aLStack112);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,0x15e235c32d);
    lib::L2CValue::L2CValue(aLStack192,0x171c51ff07);
    lib::L2CValue::L2CValue(aLStack208,0x15f254fb34);
    lua2cpp::L2CFighterCommon::reset_walk_speed_ratio
              (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40,
               (L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,HVar6);
    HVar6 = app::lua_bind::MotionModule__motion_kind_2nd_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,HVar6);
    lib::L2CValue::L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    uVar4 = lib::L2CValue::operator__(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      fVar7 = (float)app::lua_bind::MotionModule__weight_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::operator_(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar7 = (float)app::lua_bind::MotionModule__frame_2nd_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::operator_(aLStack272,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar7 = (float)app::lua_bind::MotionModule__rate_2nd_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::operator_(aLStack288,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack304,aLStack224);
    FUN_7100024870(aLStack96,aLStack304);
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::MotionModule__set_no_comp_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    lib::L2CValue::L2CValue(aLStack320,1.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,true);
    lib::L2CValue::L2CValue(aLStack368,true);
    HVar6 = lib::L2CValue::as_hash(aLStack224);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack320);
    fVar9 = (float)lib::L2CValue::as_number(aLStack336);
    bVar1 = lib::L2CValue::as_bool(aLStack352);
    bVar2 = lib::L2CValue::as_bool(aLStack368);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,fVar9,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    uVar4 = lib::L2CValue::operator__(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack320,aLStack240);
      FUN_7100024870(aLStack96,aLStack320);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack96,false);
      HVar6 = lib::L2CValue::as_hash(aLStack240);
      fVar7 = (float)lib::L2CValue::as_number(aLStack272);
      fVar8 = (float)lib::L2CValue::as_number(aLStack288);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),1.0);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar7 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar7,true);
    }
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    this_00 = aLStack224;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

