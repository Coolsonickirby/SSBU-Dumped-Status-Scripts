
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::Final_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  uchar uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack160,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_ATTACH_ITEM_GROUP_BODY);
  uVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::ItemModule__drop_attach_group_impl(this->moduleAccessor,uVar1,90.0,0.0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,false);
  bVar2 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OCTOPUS);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar4,false,-1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OCTOPUS);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_KIND_START);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar4,iVar5,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar6);
  lib::L2CValue::L2CValue(aLStack144,pfVar6[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar6[2]);
  FUN_710001de50(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x569ff9e1b);
  lib::L2CValue::operator_(pLVar8,pLVar7);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0x51ef8ae8d);
  lib::L2CValue::operator_(pLVar8,pLVar7);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,0x1f20a9d549);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  bVar2 = lib::L2CValue::as_bool(aLStack192);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar2 & 1),iVar4);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  FUN_7100026da0(this);
  lib::L2CValue::L2CValue(aLStack192,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

