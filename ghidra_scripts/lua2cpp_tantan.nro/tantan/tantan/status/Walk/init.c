
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterTantan::status::Walk_init(L2CFighterTantan *this,L2CValue *return_value)

{
  long lVar1;
  byte bVar2;
  L2CValue *this_00;
  ulong uVar3;
  Hash40 HVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_WALK);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init(this);
    lVar1 = -0x50;
  }
  else {
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,HVar4);
    HVar4 = app::lua_bind::MotionModule__motion_kind_2nd_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar4);
    lib::L2CValue::L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      fVar6 = (float)app::lua_bind::MotionModule__weight_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar6 = (float)app::lua_bind::MotionModule__frame_2nd_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar6 = (float)app::lua_bind::MotionModule__rate_2nd_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    FUN_7100024af0(aLStack96,aLStack192);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack208,aLStack112);
    FUN_7100024950(this,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,aLStack128);
      FUN_7100024af0(aLStack96,aLStack224);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack96,false);
      HVar4 = lib::L2CValue::as_hash(aLStack128);
      fVar6 = (float)lib::L2CValue::as_number(aLStack160);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::MotionModule__add_motion_2nd_impl
                (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar2 & 1),1.0);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar6,true);
    }
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::L2CValue(aLStack256,0xee2ec2860);
    lib::L2CValue::L2CValue(aLStack272,0);
    uVar3 = lib::L2CValue::as_integer(aLStack256);
    uVar5 = lib::L2CValue::as_integer(aLStack272);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack240,fVar6);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,aLStack240);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack288,aLStack96);
    lib::L2CValue::L2CValue(aLStack304,false);
    lib::L2CValue::L2CValue(aLStack320,0x9fece0d5d);
    lib::L2CValue::L2CValue(aLStack336,0xb4fb275bd);
    lib::L2CValue::L2CValue(aLStack352,0x9eeaf3544);
    lua2cpp::L2CFighterCommon::init_walk_speed
              (this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0,
               (L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    app::lua_bind::CameraModule__set_run_impl(this->moduleAccessor,0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar1 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

