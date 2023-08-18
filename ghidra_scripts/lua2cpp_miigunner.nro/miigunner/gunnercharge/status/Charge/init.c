
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerGunnercharge::status::Shoot_init
          (L2CWeaponMiigunnerGunnercharge *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack80,0x12638bad86);
  lib::L2CValue::L2CValue(aLStack320,0x419cd3efe);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack320);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack304,iVar1);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack304);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack304);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIGUNNER_GUNNERCHARGE_STATUS_KIND_CHARGE);
  uVar3 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIGUNNER_GUNNERCHARGE_STATUS_KIND_SHOOT);
    uVar3 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_710003dcb4;
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_SHOOT_LR);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE)
    ;
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_SHOOT_ANGLE);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_((L2CValue *)auStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,0x12638bad86);
    lib::L2CValue::L2CValue(aLStack336,0x96bd44dbc);
    uVar3 = lib::L2CValue::as_integer(aLStack320);
    uVar4 = lib::L2CValue::as_integer(aLStack336);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,0x12638bad86);
    lib::L2CValue::L2CValue(aLStack336,0x9bc3ffffd);
    uVar3 = lib::L2CValue::as_integer(aLStack320);
    uVar4 = lib::L2CValue::as_integer(aLStack336);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack288,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::operator_(aLStack288,aLStack240);
    lib::L2CValue::operator_(aLStack336,aLStack176);
    lib::L2CValue::operator_(aLStack320,aLStack240);
    pLVar5 = aLStack80;
    lib::L2CValue::operator_(aLStack256,pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CAgent::math_cos((L2CAgent *)auStack144,pLVar5);
    lib::L2CValue::operator_(aLStack336,aLStack256);
    lib::L2CValue::operator_(aLStack320,aLStack192);
    pLVar5 = aLStack80;
    lib::L2CValue::operator_(aLStack96,pLVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CAgent::math_sin((L2CAgent *)auStack144,pLVar5);
    lib::L2CValue::operator_(aLStack320,aLStack256);
    lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack144 + 0x10));
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack320,-1.0);
    lib::L2CValue::L2CValue(aLStack336,-1.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
    app::sv_kinetic_energy::set_accel(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack320,0x12638bad86);
    lib::L2CValue::L2CValue(aLStack336,0x988b496ce);
    uVar3 = lib::L2CValue::as_integer(aLStack320);
    uVar4 = lib::L2CValue::as_integer(aLStack336);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,0x12638bad86);
    lib::L2CValue::L2CValue(aLStack336,0x95f5f248f);
    uVar3 = lib::L2CValue::as_integer(aLStack320);
    uVar4 = lib::L2CValue::as_integer(aLStack336);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_FLOAT_CHARGE)
    ;
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::operator_(aLStack176,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::operator_(aLStack224,aLStack112);
    lib::L2CValue::operator_(aLStack336,aLStack176);
    lib::L2CValue::operator_(aLStack320,aLStack112);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack336,_MA_MSC_EFFECT_REQUEST_FOLLOW);
    lib::L2CValue::L2CValue(aLStack352,0x1c4e7af9b2);
    lib::L2CValue::L2CValue(aLStack368,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack384,7.98004);
    lib::L2CValue::L2CValue(aLStack400,-0.50584);
    lib::L2CValue::L2CValue(aLStack416,-0.25092);
    lib::L2CValue::L2CValue(aLStack432,-91.2728);
    lib::L2CValue::L2CValue(aLStack448,-1.7974);
    lib::L2CValue::L2CValue(aLStack464,176.373);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack496,0);
    lib::L2CValue::L2CValue(aLStack512,0);
    lib::L2CValue::L2CValue(aLStack528,0);
    FUN_710003e240(aLStack320,this,aLStack336,aLStack352,aLStack368,aLStack384,aLStack400,aLStack416
                   ,aLStack432,aLStack448,aLStack464,aLStack480,aLStack80,aLStack496,aLStack512,
                   aLStack528);
    lib::L2CValue::operator_(aLStack160,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET_FOLLOW);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_OWNER_FT_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack272,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_MIIGUNNER);
    uVar3 = lib::L2CValue::operator__(aLStack272,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack320,_MA_MSC_EFFECT_REQUEST_FOLLOW);
      lib::L2CValue::L2CValue(aLStack336,0x16ea5b67bd);
      lib::L2CValue::L2CValue(aLStack352,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack368,7.98004);
      lib::L2CValue::L2CValue(aLStack384,-0.50584);
      lib::L2CValue::L2CValue(aLStack400,-0.25092);
      lib::L2CValue::L2CValue(aLStack416,-91.2728);
      lib::L2CValue::L2CValue(aLStack432,-1.7974);
      lib::L2CValue::L2CValue(aLStack448,176.373);
      lib::L2CValue::L2CValue(aLStack464,1.0);
      lib::L2CValue::L2CValue(aLStack480,false);
      lib::L2CValue::L2CValue(aLStack496,0);
      lib::L2CValue::L2CValue(aLStack512,0);
      lib::L2CValue::L2CValue(aLStack528,0);
      FUN_710003e240(aLStack80,this,aLStack320,aLStack336,aLStack352,aLStack368,aLStack384,
                     aLStack400,aLStack416,aLStack432,aLStack448,aLStack464,aLStack480,aLStack496,
                     aLStack512,aLStack528);
      lib::L2CValue::operator_(aLStack160,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack320,_MA_MSC_EFFECT_REQUEST_FOLLOW);
      lib::L2CValue::L2CValue(aLStack336,0x16ea5b67bd);
      lib::L2CValue::L2CValue(aLStack352,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack368,7.98004);
      lib::L2CValue::L2CValue(aLStack384,-0.50584);
      lib::L2CValue::L2CValue(aLStack400,-0.25092);
      lib::L2CValue::L2CValue(aLStack416,-91.2728);
      lib::L2CValue::L2CValue(aLStack432,-1.7974);
      lib::L2CValue::L2CValue(aLStack448,176.373);
      lib::L2CValue::L2CValue(aLStack464,1.0);
      lib::L2CValue::L2CValue(aLStack480,0);
      lib::L2CValue::L2CValue(aLStack496,0);
      lib::L2CValue::L2CValue(aLStack512,0);
      lib::L2CValue::L2CValue(aLStack528,0);
      FUN_710003e240(aLStack80,this,aLStack320,aLStack336,aLStack352,aLStack368,aLStack384,
                     aLStack400,aLStack416,aLStack432,aLStack448,aLStack464,aLStack480,aLStack496,
                     aLStack512,aLStack528);
      lib::L2CValue::operator_(aLStack160,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MIIGUNNER_GUNNERCHARGE_INSTANCE_WORK_ID_INT_EFH_BULLET);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710003dcb4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

