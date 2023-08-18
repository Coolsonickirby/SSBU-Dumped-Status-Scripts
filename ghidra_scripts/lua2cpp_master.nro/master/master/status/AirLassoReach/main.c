
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::AirLassoReach_main(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x150e77bc9e);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  iVar2 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar4,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_LASSO_INSTANCE_WORK_ID_FLAG_CLIFF_OFFSET);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ArticleModule__set_flag_impl(this->moduleAccessor,iVar2,(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MASTER_SWORD_STATUS_KIND_REACH);
  lua2cpp::L2CFighterCommon::status_AirLassoReach(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

