
void __thiscall
L2CWeaponPacmanBigpacman::status::Start_main_loop
          (L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  GroundCorrectKind GVar1;
  L2CValue *this_00;
  ulong uVar2;
  float fVar3;
  uint uVar4;
  long lVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_AIR);
    GVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
  uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,180.0);
    uVar2 = lib::L2CValue::as_number(aLStack112);
    lVar5 = lib::L2CValue::as_number(aLStack128);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    local_50 = uVar2 & 0xffffffff | lVar5 << 0x20;
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

