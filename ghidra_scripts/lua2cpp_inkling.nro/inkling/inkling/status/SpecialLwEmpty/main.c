
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialLwEmpty_main(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  void *pvVar4;
  Fighter *pFVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x1018299f54);
  lib::L2CValue::L2CValue(aLStack96,0x14999c1014);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_7100017060(this,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK);
  lib::L2CValue::L2CValue(aLStack144,0xeeaba1d14);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,true);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  HVar3 = lib::L2CValue::as_hash(aLStack144);
  fVar6 = (float)lib::L2CValue::as_number(aLStack160);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar2,HVar3,fVar6,fVar7,(bool)(bVar1 & 1),false,0.0,true,true,
             false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pvVar4 = (void *)app::sv_system::battle_object(this->luaStateAgent);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar4);
  }
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(aLStack128);
  app::FighterSpecializer_Inkling::lack_ink(pFVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialLwEmpty_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

