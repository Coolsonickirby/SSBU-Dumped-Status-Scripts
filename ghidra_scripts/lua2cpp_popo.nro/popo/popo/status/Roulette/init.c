
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPopo::status::Roulette_init(L2CFighterPopo *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined8 local_b0;
  ulong uStack168;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
  app::lua_bind::JostleModule__set_status_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,_FIGHTER_KIND_POPO);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,_FIGHTER_KIND_NANA);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    if ((uVar5 & 1) == 0) goto LAB_710000b108;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_POPO_LINK_NO_PARTNER);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      pfVar6 = (float *)app::lua_bind::LinkModule__get_parent_pos_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar6);
      lib::L2CValue::L2CValue(aLStack160,pfVar6[1]);
      lib::L2CValue::L2CValue(aLStack144,pfVar6[2]);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_b0);
      lib::L2CValue::operator_(aLStack112,aLStack160);
      lib::L2CValue::operator_(aLStack128,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,_FIGHTER_POPO_LINK_NO_PARTNER);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
      fVar7 = (float)app::lua_bind::LinkModule__get_parent_lr_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,fVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::L2CValue(aLStack208,1.0);
      lib::L2CValue::operator_(aLStack192,aLStack208);
      lib::L2CValue::operator_(aLStack96,aLStack240);
      uVar8 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack112);
      uVar10 = lib::L2CValue::as_number(aLStack128);
      local_b0 = CONCAT44(uVar9,uVar8);
      uStack168 = (ulong)uVar10;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_b0);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
    app::lua_bind::JostleModule__set_refer_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
    app::lua_bind::JostleModule__set_ignore_speed_x_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
    app::lua_bind::JostleModule__set_propagate_push_speed_impl
              (this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,-1);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    app::lua_bind::JostleModule__set_team_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,_JOSTLE_GAP_NONE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    app::lua_bind::JostleModule__set_force_gap_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,_FIGHTER_KINETIC_ENERGY_ID_JOSTLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
    app::lua_bind::JostleModule__set_ignore_speed_x_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
LAB_710000b108:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

