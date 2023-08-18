
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueClayrocket::status::Ready_main_loop
          (L2CWeaponShizueClayrocket *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CAgent *this_00;
  L2CValue *pLVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
  uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack144,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack144);
  lib::L2CValue::L2CValue(aLStack96,aLStack128);
  pLVar7 = aLStack96;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,SUB81(pLVar7,0));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CAgent::math_atan(this_00,pLVar5,pLVar7);
  lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
  uVar10 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
  lVar11 = lib::L2CValue::as_number((L2CValue *)auStack176);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  local_50 = uVar10 & 0xffffffff | lVar11 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),_WEAPON_SHIZUE_CLAYROCKET_STATUS_WORK_ID_FLAG_HIT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_LINK_NO_CONSTRAINT);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0x2477c8e319);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack176 + 0x10));
      app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar4,HVar6);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack176 + 0x10),
               _WEAPON_SHIZUE_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DAMAGE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0x419cd3efe);
    uVar10 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_WEAPON_SHIZUE_CLAYROCKET_INSTANCE_WORK_ID_FLAG_BURST_DAMAGE)
      ;
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SHIZUE_CLAYROCKET_STATUS_KIND_BURST);
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000333e4;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0xa677aa728);
    uVar10 = lib::L2CValue::operator__(pLVar7,pLVar5);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SHIZUE_CLAYROCKET_STATUS_KIND_DISAPPEAR)
      ;
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000333e4;
    }
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,0xff);
    lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SHIZUE_CLAYROCKET_STATUS_KIND_DISAPPEAR)
      ;
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000333e4;
    }
  }
  FUN_7100032470(&local_50,this);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000333e4:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

