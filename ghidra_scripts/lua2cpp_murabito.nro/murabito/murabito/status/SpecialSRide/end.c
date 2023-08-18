
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialSRide_end(L2CFighterMurabito *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  LinkAttribute LVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  ulong *this_00;
  long lVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_FLAG_SPEED_DAMAGE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_RIDE_LOOP);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_CLAYROCKET_SHOOT_DAMAGE);
    FUN_7100023390(this,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_CLAYROCKET_SHOOT_GET_OFF);
    FUN_7100023390(this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack160,_FIGHTER_MURABITO_STATUS_SPECIAL_S_FLAG_CLAYROCKET_BURST);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack144);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_RIDE_LOOP)
    ;
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_MURABITO_CLAYROCKET_SHOOT_SHOOT);
      FUN_7100023390(this,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      uVar7 = lib::L2CValue::as_number((L2CValue *)auStack160);
      lVar10 = lib::L2CValue::as_number(aLStack176);
      uVar4 = lib::L2CValue::as_number(aLStack192);
      local_60 = uVar7 & 0xffffffff | lVar10 << 0x20;
      uStack88 = (ulong)uVar4;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,0);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      this_00 = auStack160;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
      lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0x31ed91fca);
      lib::L2CValue::L2CValue
                (aLStack176,_CONSTRAINT_FLAG_ORIENTATION_POSTURE_ROT | CONSTRAINT_FLAG_POSITION);
      lib::L2CValue::L2CValue(aLStack192,false);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      HVar8 = lib::L2CValue::as_hash(aLStack144);
      HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
                (this->moduleAccessor,iVar3,HVar8,HVar9,uVar4,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
      lib::L2CValue::L2CValue(aLStack144,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,true);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      LVar5 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack160);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
      lib::L2CValue::L2CValue(aLStack144,_LINK_ATTRIBUTE_REFERENCE_PARENT_ATTACK_STOP);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,true);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      LVar5 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack160);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
      lib::L2CValue::L2CValue(aLStack144,LINK_ATTRIBUTE_REFERENCE_PARENT_SHAKE);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,true);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      LVar5 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack160);
      app::lua_bind::LinkModule__set_attribute_impl
                (this->moduleAccessor,iVar3,LVar5,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      this_00 = &local_60;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
  }
  FUN_71000234c0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

