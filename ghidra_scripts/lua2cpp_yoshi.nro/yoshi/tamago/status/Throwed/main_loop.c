
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponYoshiTamago::status::Throwed_main_loop(L2CWeaponYoshiTamago *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  Hash40 HVar9;
  undefined8 *this_00;
  L2CValue *pLVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  long lVar16;
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  undefined local_1f0 [32];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [32];
  undefined auStack304 [32];
  undefined auStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  undefined8 auStack208 [2];
  undefined auStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_INT_BOUND_NUM)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,0xcaa1bfc5f);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdd28c8020);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_1f0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_1f0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
LAB_710002f418:
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,0);
    uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)local_1f0);
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) goto LAB_710002f51c;
    }
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    uVar5 = lib::L2CValue::operator_(aLStack144,(L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) == 0) goto LAB_710002f418;
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,0xcaa1bfc5f);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xd2663f2da);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_1f0);
    fVar11 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.0);
    pLVar10 = (L2CValue *)local_1f0;
    uVar5 = lib::L2CValue::operator_((L2CValue *)auStack192,pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
    if ((uVar5 & 1) == 0) {
LAB_710002f4d4:
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_STATUS_KIND_BURST);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      this_00 = (undefined8 *)local_1f0;
    }
    else {
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar10);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar10);
      uVar5 = lib::L2CValue::operator_((L2CValue *)local_1f0,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      if ((uVar5 & 1) == 0) goto LAB_710002f4d4;
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,0xcaa1bfc5f);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x155ac2bb66);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
      pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar5,(ulong)pLVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue(aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar15);
      pLVar10 = (L2CValue *)(local_1f0 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar15 >> 0x20));
      lib::L2CValue::operator_(aLStack224,(L2CValue *)local_1f0);
      lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),pLVar10);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_1f0);
      fVar11 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue((L2CValue *)auStack272,0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack224);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack256 + 0x10));
      fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
      uVar15 = app::sv_math::vec2_reflection(fVar11,fVar12,fVar13,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)uVar15);
      pLVar10 = (L2CValue *)(local_1f0 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar15 >> 0x20));
      lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)local_1f0);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),pLVar10);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      pLVar10 = (L2CValue *)auStack192;
      lib::L2CAgent::math_atan((L2CAgent *)auStack256,pLVar10,pLVar7);
      lib::L2CAgent::math_deg((L2CAgent *)auStack304,pLVar10);
      pLVar10 = (L2CValue *)(auStack304 + 0x10);
      lib::L2CAgent::math_atan((L2CAgent *)auStack272,pLVar10,pLVar7);
      lib::L2CAgent::math_deg((L2CAgent *)auStack336,pLVar10);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLOAT_ROT)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack368,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack384,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      pLVar10 = aLStack352;
      lib::L2CValue::operator_((L2CValue *)(auStack336 + 0x10),pLVar10);
      lib::L2CAgent::math_abs((L2CAgent *)local_1f0,pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::operator_(aLStack368,aLStack400);
      lib::L2CValue::operator_((L2CValue *)&local_70,aLStack384);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,0.0);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLOAT_ROT)
      ;
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::operator_((L2CValue *)auStack272,(L2CValue *)auStack208);
      lib::L2CValue::operator_((L2CValue *)(auStack304 + 0x10),(L2CValue *)auStack208);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_1f0);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lib::L2CValue::L2CValue(aLStack448,0.0);
      pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,*pfVar8);
      pLVar10 = (L2CValue *)(local_1f0 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,pfVar8[1]);
      lib::L2CValue::L2CValue(aLStack464,pfVar8[2]);
      lib::L2CValue::operator_(aLStack416,(L2CValue *)local_1f0);
      lib::L2CValue::operator_(aLStack432,pLVar10);
      lib::L2CValue::operator_(aLStack448,aLStack464);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::L2CValue(aLStack512,0.0);
      lib::L2CValue::L2CValue(aLStack528,0.0);
      lib::L2CValue::L2CValue(aLStack544,0.0);
      lib::L2CValue::L2CValue(aLStack560,0x31d39a761);
      HVar9 = lib::L2CValue::as_hash(aLStack560);
      uVar5 = lib::L2CValue::as_number(aLStack512);
      lVar16 = lib::L2CValue::as_number(aLStack528);
      uVar4 = lib::L2CValue::as_number(aLStack544);
      local_70 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar16 << 0x20);
      uStack104 = (ulong)uVar4;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar9,(Vector3f *)&local_70,true);
      lib::L2CValue::L2CValue((L2CValue *)local_1f0,(float)local_70);
      pLVar10 = (L2CValue *)(local_1f0 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,local_70._4_4_);
      lib::L2CValue::L2CValue(aLStack464,(float)uStack104);
      lib::L2CValue::operator_(aLStack512,(L2CValue *)local_1f0);
      lib::L2CValue::operator_(aLStack528,pLVar10);
      lib::L2CValue::operator_(aLStack544,aLStack464);
      lib::L2CValue::_L2CValue(aLStack464);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::operator_(aLStack512,aLStack416);
      lib::L2CValue::operator_(aLStack528,aLStack432);
      lib::L2CValue::operator_(aLStack416,aLStack560);
      lib::L2CValue::operator_(aLStack416,(L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      uVar5 = lib::L2CValue::as_number(aLStack416);
      lVar16 = lib::L2CValue::as_number(aLStack432);
      uVar4 = lib::L2CValue::as_number(aLStack448);
      local_1f0._0_8_ = (void **)(uVar5 & 0xffffffff | lVar16 << 0x20);
      local_1f0._8_8_ = (lua_State *)(ulong)uVar4;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)local_1f0);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1f0,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_INT_BOUND_NUM);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_1f0);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)local_1f0);
      lib::L2CValue::_L2CValue(aLStack560);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::_L2CValue(aLStack512);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack304);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack272);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
      lib::L2CValue::_L2CValue(aLStack224);
      this_00 = auStack208;
    }
    lib::L2CValue::_L2CValue((L2CValue *)this_00);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
LAB_710002f51c:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

