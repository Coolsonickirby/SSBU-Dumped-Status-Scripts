
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN1Walk_init(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
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
  
  lib::L2CValue::L2CValue(aLStack96,0xee2ec2860);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0xed6982b48);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::operator_(aLStack64,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x9fece0d5d);
  lib::L2CValue::L2CValue(aLStack112,0xb4fb275bd);
  lib::L2CValue::L2CValue(aLStack128,0x9eeaf3544);
  lib::L2CValue::L2CValue(aLStack64,0x10a4f0be1e);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x12c68ed173);
  lib::L2CValue::operator_(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x10b4918607);
  lib::L2CValue::operator_(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,iVar1);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_WALK);
  uVar2 = lib::L2CValue::operator__(aLStack144,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,aLStack96);
    lib::L2CValue::L2CValue(aLStack144,aLStack112);
    lib::L2CValue::L2CValue(aLStack160,aLStack128);
    lib::L2CValue::L2CValue(aLStack176,false);
    lib::L2CValue::L2CValue(aLStack192,aLStack80);
    lua2cpp::L2CFighterCommon::sub_walk_uniq_process_init_common_param
              (this,(L2CValue)0xc0,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,aLStack80);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,aLStack96);
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    lib::L2CValue::L2CValue(aLStack208,aLStack128);
    lua2cpp::L2CFighterCommon::reset_walk_speed_ratio
              (this,(L2CValue)0xc0,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40,
               (L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

