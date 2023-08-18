
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterFox::status::SpecialS_end(L2CFighterFox *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  lVar4 = lib::L2CValue::as_number(aLStack112);
  uVar2 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar3 & 0xffffffff | lVar4 << 0x20;
  uStack72 = (ulong)uVar2;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_FOX_INSTANCE_WORK_ID_FLAG_ILLUSION_LANDING);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_FOX_INSTANCE_WORK_ID_FLAG_REFLECTOR_LANDING);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_FOX_INSTANCE_WORK_ID_FLAG_ILLUSION_LANDING);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

