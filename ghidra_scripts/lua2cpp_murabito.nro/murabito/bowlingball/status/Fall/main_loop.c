
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoBowlingball::status::Fall_main_loop
          (L2CWeaponMurabitoBowlingball *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  bVar3 = app::lua_bind::GroundModule__is_floor_touch_line_impl(this->moduleAccessor,uVar5);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar6 = lib::L2CValue::as_integer(aLStack112);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar6);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar4 & 1U) != 0) {
        iVar6 = app::lua_bind::GroundModule__get_touch_flag_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,iVar6);
        lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_EFFECT_EFFECT);
          lib::L2CValue::L2CValue(aLStack128,0xfa06bb067);
          lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,1.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          lib::L2CValue::L2CValue(aLStack368,true);
          FUN_7100002eb0(aLStack80,this,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,
                         aLStack192,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,
                         aLStack288,aLStack304,aLStack320,aLStack336,aLStack352,aLStack368);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack128,0x199c462b5d);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          lib::L2CValue::_L2CValue(aLStack96);
          return;
        }
        lib::L2CValue::_L2CValue(aLStack96);
      }
      iVar6 = 0;
      goto LAB_7100029d6c;
    }
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_BOWLING_BALL_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue(aLStack96,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  iVar6 = 1;
LAB_7100029d6c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar6);
  return;
}

