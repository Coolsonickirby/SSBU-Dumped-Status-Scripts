
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::FinalAttack_end(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71002237e0();
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_ULTRASWORD);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_ULTRASWORDHAT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack64);
  app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack80,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_kinetic_energy::clear_speed_ex(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

