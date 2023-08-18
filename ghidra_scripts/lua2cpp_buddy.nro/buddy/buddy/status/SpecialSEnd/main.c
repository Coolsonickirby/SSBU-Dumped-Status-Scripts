
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialSEnd_main(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  ulong uVar2;
  float fVar3;
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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar1 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0x1852046d5f);
    uVar1 = lib::L2CValue::as_integer(aLStack96);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar3);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0x1bcf1ee221);
    uVar1 = lib::L2CValue::as_integer(aLStack96);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar2)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar3);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::mul_speed(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
            (this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710001ff60(this);
  lib::L2CValue::L2CValue(aLStack128,0xdb8bd3614);
  lib::L2CValue::L2CValue(aLStack144,0x1158d0953d);
  lib::L2CValue::L2CValue(aLStack160,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack192,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,SpecialSEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

