
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialHiJump_exec_stop(L2CFighterDedede *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLOAT_PRE_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  uVar3 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
    uVar3 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
      uVar3 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710000839c;
      lib::L2CValue::L2CValue(aLStack80,0x570211ebd);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,180.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      uVar6 = lib::L2CValue::as_number(aLStack96);
      uVar7 = lib::L2CValue::as_number(aLStack112);
      uVar8 = lib::L2CValue::as_number(aLStack128);
      local_40 = CONCAT44(uVar7,uVar6);
      uStack56 = (ulong)uVar8;
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (this->moduleAccessor,HVar4,(Vector3f *)&local_40,0,0);
    }
    else {
      fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,fVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      uVar3 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::_L2CValue((L2CValue *)&local_40);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_710000839c;
      lib::L2CValue::L2CValue(aLStack80,0x570211ebd);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,180.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      uVar6 = lib::L2CValue::as_number(aLStack96);
      uVar7 = lib::L2CValue::as_number(aLStack112);
      uVar8 = lib::L2CValue::as_number(aLStack128);
      local_40 = CONCAT44(uVar7,uVar6);
      uStack56 = (ulong)uVar8;
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (this->moduleAccessor,HVar4,(Vector3f *)&local_40,0,0);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_710000839c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

