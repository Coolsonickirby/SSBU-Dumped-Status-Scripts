
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ItemHeavyPickup_init(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ITEM_HEAVY_PICKUP);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    fVar5 = (float)app::sv_fighter_util::get_item_lift_motion_rate_mul(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack160,0x18639cd4fe);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    lib::L2CValue::operator_(aLStack112,aLStack128);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,0xe000f4c98);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

