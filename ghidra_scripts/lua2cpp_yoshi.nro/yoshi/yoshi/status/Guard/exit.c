
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterYoshi::status::Guard_exit(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessGuard_exitStatus_common(this);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::operator_(aLStack96,pLVar2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD_DAMAGE);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
        uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
          uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
            uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x2dd241385f);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
              lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0xdc41991b5);
              HVar4 = lib::L2CValue::as_hash(aLStack80);
              HVar4 = app::lua_bind::EffectModule__get_variation_effect_kind_impl
                                (this->moduleAccessor,HVar4,-1);
              lib::L2CValue::L2CValue(aLStack144,HVar4);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0x166665836f);
              uVar3 = lib::L2CValue::operator__(aLStack144,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar3 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_COLOR);
                iVar1 = lib::L2CValue::as_integer(aLStack160);
                iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
                lib::L2CValue::L2CValue(aLStack80,iVar1);
                lib::L2CValue::operator_(aLStack112,aLStack80);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack160);
                iVar1 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::EffectModule__set_offset_to_next_impl(this->moduleAccessor,iVar1);
              }
              lib::L2CValue::L2CValue(aLStack160,_MA_MSC_CMD_EFFECT_EFFECT);
              lib::L2CValue::L2CValue(aLStack176,0x31ed91fca);
              lib::L2CValue::L2CValue(aLStack192,0.0);
              lib::L2CValue::L2CValue(aLStack208,0.0);
              lib::L2CValue::L2CValue(aLStack224,0.0);
              lib::L2CValue::L2CValue(aLStack240,0.0);
              lib::L2CValue::L2CValue(aLStack256,0.0);
              lib::L2CValue::L2CValue(aLStack272,0.0);
              lib::L2CValue::L2CValue(aLStack288,1.0);
              lib::L2CValue::L2CValue(aLStack304,0.0);
              lib::L2CValue::L2CValue(aLStack320,0.0);
              lib::L2CValue::L2CValue(aLStack336,0.0);
              lib::L2CValue::L2CValue(aLStack352,0.0);
              lib::L2CValue::L2CValue(aLStack368,360.0);
              lib::L2CValue::L2CValue(aLStack384,0.0);
              lib::L2CValue::L2CValue(aLStack400,false);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
              app::sv_module_access::effect(this->luaStateAgent);
              lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack400);
              lib::L2CValue::_L2CValue(aLStack384);
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
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

