
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::Walk_calc_param(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lua2cpp::L2CFighterCommon::FighterStatusUniqProcessWalk_calc_param(this);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xee2ec2860);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,aLStack64);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,0x9fece0d5d);
    lib::L2CValue::L2CValue(aLStack144,0x1047b3b0ba);
    lib::L2CValue::L2CValue(aLStack160,0xe3a616720);
    lua2cpp::L2CFighterCommon::reset_walk_speed_ratio
              (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70,
               (L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  return;
}

