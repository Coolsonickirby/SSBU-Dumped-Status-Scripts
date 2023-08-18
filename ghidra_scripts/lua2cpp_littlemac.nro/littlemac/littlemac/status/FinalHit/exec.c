
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::FinalHit_exec(L2CFighterLittlemac *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_SET_FIX_POS);
  iVar2 = lib::L2CValue::as_integer(aLStack136);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack456,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack184,false);
  uVar3 = lib::L2CValue::operator__(aLStack456,aLStack184);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack456);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar3 & 1) == 0) {
    pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack184,*pfVar4);
    lib::L2CValue::L2CValue(aLStack168,pfVar4[1]);
    lib::L2CValue::L2CValue(aLStack152,pfVar4[2]);
    FUN_7100005790(aLStack136,this,aLStack184);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack216,0.0);
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::L2CValue(aLStack248,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x28,(L2CValue)0x18,(L2CValue)0x8);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_FLOAT_FIX_POS_X);
    iVar2 = lib::L2CValue::as_integer(aLStack264);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack456,fVar10);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
    lib::L2CValue::operator_(pLVar5,aLStack456);
    lib::L2CValue::_L2CValue(aLStack456);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_FLOAT_FIX_POS_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack264);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack456,fVar10);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar5,aLStack456);
    lib::L2CValue::_L2CValue(aLStack456);
    lib::L2CValue::_L2CValue(aLStack264);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x162d277af);
    lib::L2CValue::operator_(pLVar6,pLVar5);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
    lib::L2CValue::operator_(pLVar5,pLVar6);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar5,pLVar6);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x162d277af);
    lib::L2CValue::operator_(pLVar5,pLVar6);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xe8,(L2CValue)0xd8,(L2CValue)0xc8);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::L2CValue(aLStack344,0.0);
    lib::L2CValue::L2CValue(aLStack360,0.0);
    fVar14 = 0.0;
    lib::L2CValue::L2CValue(aLStack376,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa8,(L2CValue)0x98,(L2CValue)0x88);
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::L2CValue(aLStack456,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack408,0x16b89c1cb6);
    uVar3 = lib::L2CValue::as_integer(aLStack456);
    uVar7 = lib::L2CValue::as_integer(aLStack408);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar3,uVar7);
    lib::L2CValue::L2CValue(aLStack392,fVar10);
    lib::L2CValue::_L2CValue(aLStack408);
    lib::L2CValue::_L2CValue(aLStack456);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x162d277af);
    fVar10 = (float)lib::L2CValue::as_number(pLVar5);
    fVar11 = (float)lib::L2CValue::as_number(pLVar6);
    fVar12 = (float)lib::L2CValue::as_number(pLVar8);
    fVar10 = (float)app::sv_math::vec3_length(fVar10,fVar11,fVar12);
    lib::L2CValue::L2CValue(aLStack408,fVar10);
    uVar3 = lib::L2CValue::operator_(aLStack408,aLStack392);
    if ((uVar3 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x162d277af);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x162d277af);
      fVar10 = (float)lib::L2CValue::as_number(pLVar9);
      fVar11 = (float)lib::L2CValue::as_number(this_00);
      fVar12 = (float)lib::L2CValue::as_number(this_01);
      uVar13 = app::sv_math::vec3_normalize(fVar10,fVar11,fVar12);
      lib::L2CValue::L2CValue(aLStack456,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack440,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack424,fVar14);
      lib::L2CValue::operator_(pLVar5,aLStack456);
      lib::L2CValue::operator_(pLVar6,aLStack440);
      lib::L2CValue::operator_(pLVar8,aLStack424);
      lib::L2CValue::_L2CValue(aLStack424);
      lib::L2CValue::_L2CValue(aLStack440);
      lib::L2CValue::_L2CValue(aLStack456);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x1fbdb2615);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x162d277af);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
      lib::L2CValue::operator_(pLVar9,aLStack392);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar9,aLStack392);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x162d277af);
      lib::L2CValue::operator_(pLVar9,aLStack392);
      lib::L2CValue::operator_(pLVar5,aLStack456);
      lib::L2CValue::operator_(pLVar6,aLStack472);
      lib::L2CValue::operator_(pLVar8,aLStack488);
      lib::L2CValue::_L2CValue(aLStack488);
      lib::L2CValue::_L2CValue(aLStack472);
      lib::L2CValue::_L2CValue(aLStack456);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x18cdc1683);
      lib::L2CValue::operator_(pLVar6,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar6,pLVar5);
    }
    lib::L2CValue::L2CValue(aLStack456,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack328,0x1fbdb2615);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack456);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack456);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack408);
    lib::L2CValue::_L2CValue(aLStack392);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

