
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::JumpAerial_end(L2CFighterYoshi *this,L2CValue *return_value)

{
  DamageNoReactionMode DVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong uStack64;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_DAMAGE_NO_REACTION_MODE_NORMAL);
  DVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar1,-1.0,-1.0,-1);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack64,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLAG_JUMP_AERIAL_ARMOR);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack64);
  lua2cpp::L2CFighterCommon::status_end_JumpAerial(this);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack80);
  lVar5 = lib::L2CValue::as_number(aLStack96);
  uVar3 = lib::L2CValue::as_number(aLStack112);
  uStack64 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack56 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&uStack64,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

