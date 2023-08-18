
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPickel::status::Walk_init(L2CFighterPickel *this,L2CValue *return_value)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
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
  L2CValue aLStack64 [16];
  
  FUN_710006f9d0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xee2ec2860);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar1 = lib::L2CValue::as_integer(aLStack80);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    lib::L2CValue::L2CValue(aLStack144,0x9fece0d5d);
    lib::L2CValue::L2CValue(aLStack160,0xb4fb275bd);
    lib::L2CValue::L2CValue(aLStack176,0x9eeaf3544);
    lua2cpp::L2CFighterCommon::init_walk_speed
              (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70,
               (L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack192,0x9fece0d5d);
    lib::L2CValue::L2CValue(aLStack208,0xb4fb275bd);
    lib::L2CValue::L2CValue(aLStack224,0x9eeaf3544);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack256,1.0);
    lua2cpp::L2CFighterCommon::init_walk_motion
              (this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    app::lua_bind::CameraModule__set_run_impl(this->moduleAccessor,0);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init(this);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

