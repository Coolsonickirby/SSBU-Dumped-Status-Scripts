
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialSHoldEnd_null(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar6;
  float fVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack192,in_x1);
  lib::L2CValue::L2CValue(aLStack208,in_x2);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_END_SPECIAL_S_CHANGE_MOTION
            );
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
    lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack160,0x19ce0a5439);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::L2CValue(aLStack80,2.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_whole_rate_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,
               _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_END_SPECIAL_S_CHANGE_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

