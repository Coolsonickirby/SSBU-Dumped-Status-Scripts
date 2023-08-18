
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDrag_end(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  L2CValue *this_00;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_F);
  uVar3 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar3 = lib::L2CValue::as_number(aLStack96);
    lVar5 = lib::L2CValue::as_number(aLStack112);
    uVar4 = lib::L2CValue::as_number(aLStack128);
    local_50 = uVar3 & 0xffffffff | lVar5 << 0x20;
    uStack72 = (ulong)uVar4;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    FUN_7100006ee0(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

