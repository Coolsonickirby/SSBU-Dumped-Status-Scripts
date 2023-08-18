
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMewtwoShadowball::status::Shoot_exec
          (L2CWeaponMewtwoShadowball *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  float *pfVar12;
  L2CAgent *this_00;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  undefined8 uVar18;
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  ulong local_1d0;
  ulong uStack456;
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [24];
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
  
  lib::L2CValue::L2CValue
            (aLStack152,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_INT_SHOOT_MOTION_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack152);
  ppBVar13 = &this->moduleAccessor;
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar13,iVar2);
  lib::L2CValue::L2CValue(aLStack136,lVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,0x57044fcbe);
  uVar5 = lib::L2CValue::operator__(aLStack136,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_INT_FLICKER_COUNTER
              );
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar13,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_INT_FLICKER_COUNTER
              );
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar2);
    lib::L2CValue::L2CValue(aLStack136,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_1d0,0x10339c9593);
    lib::L2CValue::L2CValue(aLStack168,0x319c65f67);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
    uVar6 = lib::L2CValue::as_integer(aLStack168);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack152,iVar2);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    uVar5 = lib::L2CValue::operator__(aLStack152,aLStack136);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_1d0,0);
      lib::L2CValue::L2CValue
                (aLStack168,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_INT_FLICKER_COUNTER);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
      iVar3 = lib::L2CValue::as_integer(aLStack168);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar2,iVar3);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_1d0,0.25);
      lib::L2CValue::operator_
                ((L2CValue *)&LINK_ATTRIBUTE_REFERENCE_PARENT_INK_PAINT,(L2CValue *)&local_1d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::L2CValue(aLStack248,0x66933a7e6);
      HVar7 = lib::L2CValue::as_hash(aLStack248);
      fVar14 = (float)app::sv_math::randf(HVar7,1.0);
      lib::L2CValue::L2CValue(aLStack232,fVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_1d0,2.0);
      lib::L2CValue::operator_(aLStack232,(L2CValue *)&local_1d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_1d0,1.0);
      lib::L2CValue::operator_(aLStack216,(L2CValue *)&local_1d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::operator_(aLStack184,aLStack200);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack248);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1d0,
                 _WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_ANGLE);
      fVar14 = (float)lib::L2CValue::as_number(aLStack168);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
      app::lua_bind::WorkModule__add_float_impl(*ppBVar13,fVar14,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1d0,
                 _WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_SPEED);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
      lib::L2CValue::L2CValue(aLStack184,fVar14);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::operator_(aLStack184);
      lib::L2CValue::L2CValue((L2CValue *)&local_1d0,0.5);
      lib::L2CValue::operator_(aLStack152,(L2CValue *)&local_1d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::operator_(aLStack216,aLStack232);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_1d0,
                 _WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_ACCEL);
      fVar14 = (float)lib::L2CValue::as_number(aLStack200);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack168);
    }
    lib::L2CValue::L2CValue
              (aLStack168,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_ACCEL);
    iVar2 = lib::L2CValue::as_integer(aLStack168);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_1d0,fVar14);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue
              (aLStack168,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_SPEED);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_1d0);
    iVar2 = lib::L2CValue::as_integer(aLStack168);
    app::lua_bind::WorkModule__add_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::L2CValue
              (aLStack184,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_ANGLE);
    iVar2 = lib::L2CValue::as_integer(aLStack184);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
    lib::L2CValue::L2CValue(aLStack168,fVar14);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::L2CValue
              (aLStack200,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_SPEED);
    iVar2 = lib::L2CValue::as_integer(aLStack200);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
    lib::L2CValue::L2CValue(aLStack184,fVar14);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::L2CValue
              (aLStack216,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FLICKER_SCALE);
    pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack216);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,(int)pLVar8);
    lib::L2CValue::L2CValue(aLStack200,fVar14);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CAgent::math_cos((L2CAgent *)aLStack168,pLVar8);
    lib::L2CValue::operator_(aLStack248,aLStack184);
    pLVar8 = aLStack200;
    lib::L2CValue::operator_(aLStack232,pLVar8);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack168,pLVar8);
    lib::L2CValue::operator_(aLStack264,aLStack184);
    lib::L2CValue::operator_(aLStack248,aLStack200);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::L2CValue(aLStack248,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FX);
    fVar14 = (float)lib::L2CValue::as_number(aLStack216);
    iVar2 = lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::WorkModule__add_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::L2CValue(aLStack248,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FY);
    fVar14 = (float)lib::L2CValue::as_number(aLStack232);
    iVar2 = lib::L2CValue::as_integer(aLStack248);
    app::lua_bind::WorkModule__add_float_impl(*ppBVar13,fVar14,iVar2);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack136);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_SCALE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
  lib::L2CValue::L2CValue(aLStack136,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_PX);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
  lib::L2CValue::L2CValue(aLStack152,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_PY);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
  lib::L2CValue::L2CValue(aLStack168,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue(aLStack200,0.0);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x38,(L2CValue)0x28);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack232,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack232);
  uVar18 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,(float)uVar18);
  lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::operator_(pLVar9,aLStack448);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue(aLStack232);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar11,aLStack136);
  lib::L2CValue::operator_(pLVar8,pLVar10);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl
                    (LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
  lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,false);
  bVar1 = lib::L2CValue::operator__(aLStack248,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue(aLStack232,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::L2CValue(aLStack248);
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,true);
  uVar5 = lib::L2CValue::operator__(aLStack232,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack280,0.0);
    lib::L2CValue::L2CValue(aLStack296,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe8,(L2CValue)0xd8);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
    pfVar12 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                 (LINK_ATTRIBUTE_REFERENCE_PARENT_SLOW);
    lib::L2CValue::L2CValue((L2CValue *)&local_1d0,*pfVar12);
    lib::L2CValue::L2CValue(aLStack448,pfVar12[1]);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
    lib::L2CValue::operator_(pLVar9,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    lib::L2CValue::L2CValue(aLStack328,0.0);
    lib::L2CValue::L2CValue(aLStack344,0.0);
    pLVar8 = aLStack344;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb8,SUB81(pLVar8,0));
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
    lib::L2CValue::operator_(aLStack152,pLVar11);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack168,pLVar11);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_1d0);
    lib::L2CValue::operator_(pLVar10,aLStack360);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack312,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack312,0x1fbdb2615);
    lib::L2CAgent::math_atan(this_00,pLVar9,pLVar8);
    lib::L2CValue::operator_(aLStack360);
    lib::L2CValue::operator_(aLStack248,(L2CValue *)&local_1d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    lib::L2CValue::_L2CValue(aLStack360);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
    fVar14 = (float)lib::L2CValue::as_number(pLVar10);
    fVar15 = (float)lib::L2CValue::as_number(pLVar11);
    fVar16 = (float)lib::L2CValue::as_number(aLStack248);
    uVar18 = app::sv_math::vec2_rot(fVar14,fVar15,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_1d0,(float)uVar18);
    lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
    lib::L2CValue::operator_(pLVar9,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack264);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  lib::L2CValue::operator_(aLStack152,pLVar8);
  lib::L2CValue::operator_(aLStack152,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  lib::L2CValue::operator_(aLStack168,pLVar8);
  lib::L2CValue::operator_(aLStack168,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_PX);
  fVar14 = (float)lib::L2CValue::as_number(aLStack152);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_PY);
  fVar14 = (float)lib::L2CValue::as_number(aLStack168);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FX);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
  lib::L2CValue::L2CValue(aLStack264,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1d0,_WEAPON_MEWTWO_SHADOWBALL_INSTANCE_WORK_ID_FLOAT_FY);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1d0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar2);
  lib::L2CValue::L2CValue(aLStack312,fVar14);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue(aLStack376,0.0);
  lib::L2CValue::L2CValue(aLStack392,0.0);
  lib::L2CValue::L2CValue(aLStack408,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x88,(L2CValue)0x78,(L2CValue)0x68);
  lib::L2CValue::_L2CValue(aLStack408);
  lib::L2CValue::_L2CValue(aLStack392);
  lib::L2CValue::_L2CValue(aLStack376);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x162d277af);
  pfVar12 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,*pfVar12);
  lib::L2CValue::L2CValue(aLStack448,pfVar12[1]);
  lib::L2CValue::L2CValue(aLStack432,pfVar12[2]);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::operator_(pLVar9,aLStack448);
  lib::L2CValue::operator_(pLVar10,aLStack432);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::operator_(aLStack264,aLStack136);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::operator_(aLStack312,aLStack136);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,true);
  uVar5 = lib::L2CValue::operator__(aLStack232,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  if ((uVar5 & 1) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
    fVar14 = (float)lib::L2CValue::as_number(pLVar10);
    fVar15 = (float)lib::L2CValue::as_number(pLVar11);
    fVar16 = (float)lib::L2CValue::as_number(aLStack248);
    uVar18 = app::sv_math::vec2_rot(fVar14,fVar15,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)&local_1d0,(float)uVar18);
    lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
    lib::L2CValue::operator_(pLVar9,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  lib::L2CValue::operator_(aLStack152,pLVar8);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  lib::L2CValue::operator_(aLStack168,pLVar8);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x162d277af);
  uVar5 = lib::L2CValue::as_number(pLVar8);
  lVar4 = lib::L2CValue::as_number(pLVar9);
  uVar17 = lib::L2CValue::as_number(pLVar10);
  local_1d0 = uVar5 & 0xffffffff | lVar4 << 0x20;
  uStack456 = (ulong)uVar17;
  app::lua_bind::PostureModule__set_pos_impl(*ppBVar13,(Vector3f *)&local_1d0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_1d0,0.0);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack360,0x1fbdb2615);
  lib::L2CValue::operator_(aLStack168,pLVar10);
  fVar14 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack560,fVar14);
  lib::L2CValue::operator_(aLStack544,aLStack560);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_1d0);
  lib::L2CValue::operator_(pLVar9,aLStack528);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1d0);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x1fbdb2615);
  uVar5 = lib::L2CValue::as_number(pLVar8);
  uVar17 = lib::L2CValue::as_number(pLVar9);
  local_1d0 = uVar5 & 0xffffffff | (ulong)uVar17 << 0x20;
  uStack456 = 0;
  app::lua_bind::GroundModule__set_rhombus_offset_impl(*ppBVar13,(Vector2f *)&local_1d0);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack360);
  lib::L2CValue::_L2CValue(aLStack312);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

