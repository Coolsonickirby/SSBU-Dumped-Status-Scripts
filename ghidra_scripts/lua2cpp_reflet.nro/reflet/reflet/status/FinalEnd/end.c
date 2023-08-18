
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::FinalEnd_end(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_GENERATE_ARTICLE_CHROM);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,(bool)(bVar1 & 1));
  lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0x1e0aba2d68);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_30);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar3);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  fVar3 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar3);
  lib::L2CValue::operator_(aLStack64,(L2CValue *)&local_30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  fVar3 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar3);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  fVar3 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar3);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,10.7071);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_30);
  lib::L2CValue::operator_(aLStack64,aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack144);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  local_30 = CONCAT44(uVar5,uVar4);
  uStack40 = (ulong)uVar6;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_30);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  FUN_710001c940(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

