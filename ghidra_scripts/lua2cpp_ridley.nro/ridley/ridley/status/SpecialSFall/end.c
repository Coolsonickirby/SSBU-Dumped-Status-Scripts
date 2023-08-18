
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSFall_end(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_Y);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_FALL_JUMP);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      FUN_7100006ee0(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1))
      ;
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  lVar8 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar5 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar7;
  app::lua_bind::CameraModule__set_camera_range_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

