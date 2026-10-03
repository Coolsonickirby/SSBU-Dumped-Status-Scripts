
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100017ed0(L2CFighterFox *this,L2CValue *return_value)

{
  byte bVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator==(this_00,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar2 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar2 & 1) == 0) {
      fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar4);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar2 = lib::L2CValue::operator<(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0x1f73affc96);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_APPEAL_KIND_SMASH);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x1272e2e8e8);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar3 = lib::L2CValue::as_hash(aLStack112);
        fVar4 = (float)lib::L2CValue::as_number(aLStack128);
        fVar5 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar3,fVar4,fVar5,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0x1f73affc96);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_APPEAL_KIND_SMASH);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x1288edd58b);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar3 = lib::L2CValue::as_hash(aLStack112);
        fVar4 = (float)lib::L2CValue::as_number(aLStack128);
        fVar5 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar3,fVar4,fVar5,(bool)(bVar1 & 1),0.0,false,false);
      }
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,FUN_7100018310);
      lua2cpp::L2CFighterBase::shift(this,(L2CValue)0x90);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::~L2CValue(aLStack112);
      return;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

