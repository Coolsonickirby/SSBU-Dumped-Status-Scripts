
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalFinishAttack_end(L2CFighterDiddy *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  FUN_710000e730();
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  lVar5 = lib::L2CValue::as_number(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack112);
  local_40 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack56 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_40,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  lVar5 = lib::L2CValue::as_number(aLStack112);
  uVar3 = lib::L2CValue::as_number(aLStack128);
  local_40 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack56 = (ulong)uVar3;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar2,(Vector3f *)&local_40,0,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_DIDDY_GENERATE_ARTICLE_LOCK_ON_CURSOR);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

