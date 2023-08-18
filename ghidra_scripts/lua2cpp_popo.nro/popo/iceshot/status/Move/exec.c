
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPopoIceshot::status::Move_exec(L2CWeaponPopoIceshot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40MapEntry ***pppHVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  Hash40MapEntry **local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_ROTATE_DEGREE_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  ppBVar10 = &this->moduleAccessor;
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf4e9c2dc);
  lib::L2CValue::L2CValue(aLStack144,0x1758840083);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack128,fVar11);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf4e9c2dc);
  lib::L2CValue::L2CValue(aLStack160,0x175a46016e);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar7 = lib::L2CValue::as_integer(aLStack160);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack144,fVar11);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_ROTATE_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_STATUS_WORK_INT_ROTATE_Y_REVERSE_COUNTER);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_POPO_ICESHOT_STATUS_WORK_INT_ROTATE_Y_REVERSE_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack224,_WEAPON_POPO_ICESHOT_STATUS_WORK_INT_ROTATE_Y_REVERSE_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),iVar3);
  uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_INIT_ROTATE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    if ((bVar2 & 1U) != 0) {
      FUN_7100027be0(aLStack192,this);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator_(aLStack112,aLStack192);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      }
      FUN_7100027e00(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack224 + 0x10),
                 _WEAPON_POPO_ICESHOT_STATUS_WORK_INT_ROTATE_Y_REVERSE_COUNTER);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
      app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
      goto LAB_7100026d50;
    }
    lib::L2CValue::operator_(aLStack112,aLStack128);
    pppHVar9 = &local_60;
    lib::L2CValue::operator_(aLStack112,(L2CValue *)pppHVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,(L2CValue *)pppHVar9);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::operator_(aLStack144);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
      else {
        lib::L2CValue::operator_(aLStack112,aLStack144);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::operator_(aLStack160,aLStack112);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-360.0);
      uVar6 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) goto LAB_7100026d68;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack160,aLStack192);
    }
    else {
      lib::L2CValue::operator_(aLStack160,aLStack112);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) goto LAB_7100026d68;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack160,aLStack192);
    }
  }
  else {
    FUN_7100027be0(&local_60,this);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLAG_INIT_ROTATE)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack224 + 0x10),
               _WEAPON_POPO_ICESHOT_STATUS_WORK_INT_ROTATE_Y_REVERSE_COUNTER);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
LAB_7100026d50:
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue(aLStack192);
LAB_7100026d68:
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_ROTATE_DEGREE_SPEED);
  fVar11 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_ROTATE_DEGREE);
  fVar11 = (float)lib::L2CValue::as_number(aLStack192);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf4e9c2dc);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x127c179a27);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf4e9c2dc);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0x1057a78509);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdf4e9c2dc);
    lib::L2CValue::L2CValue(aLStack240,0x14eb4730c4);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar11);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_INSTANCE_WORK_ID_FLOAT_ROT_DEGREE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_INSTANCE_WORK_ID_FLOAT_TOP_DEGREE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack272,fVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::operator_(aLStack240,aLStack192);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),aLStack240);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator_(aLStack240,(L2CValue *)(auStack224 + 0x10));
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
    uVar6 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator_(aLStack256);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    pLVar8 = aLStack256;
    lib::L2CValue::operator_(aLStack240,pLVar8);
    lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar8);
    uVar6 = lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      pLVar8 = aLStack256;
      lib::L2CValue::operator_(aLStack240,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar8);
      lib::L2CValue::operator_(aLStack304,aLStack320);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack240,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_POPO_ICESHOT_INSTANCE_WORK_ID_FLOAT_ROT_DEGREE);
    fVar11 = (float)lib::L2CValue::as_number(aLStack304);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue(aLStack192);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack224 + 0x10),
               _WEAPON_POPO_ICESHOT_STATUS_WORK_INT_GROUND_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_EFFECT_HANDLE_NULL);
    uVar6 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack192,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),1.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 _WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_GROUND_EFFECT_HANDLE_LR);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),(L2CValue *)auStack224);
      if ((uVar6 & 1) == 0) {
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
        lib::L2CValue::L2CValue(aLStack240,fVar11);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)(auStack224 + 0x10));
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,180.0);
          lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::L2CValue
                  (aLStack288,_WEAPON_POPO_ICESHOT_STATUS_WORK_INT_GROUND_EFFECT_HANDLE);
        iVar3 = lib::L2CValue::as_integer(aLStack288);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack272,iVar3);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        uVar5 = lib::L2CValue::as_integer(aLStack272);
        uVar6 = lib::L2CValue::as_number(aLStack304);
        lVar13 = lib::L2CValue::as_number(aLStack256);
        uVar12 = lib::L2CValue::as_number(aLStack320);
        local_60 = (Hash40MapEntry **)(uVar6 & 0xffffffff | lVar13 << 0x20);
        uStack88 = (ulong)uVar12;
        app::lua_bind::EffectModule__set_rot_impl(*ppBVar10,uVar5,(Vector3f *)&local_60);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _WEAPON_POPO_ICESHOT_STATUS_WORK_FLOAT_GROUND_EFFECT_HANDLE_LR);
        fVar11 = (float)lib::L2CValue::as_number(aLStack272);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue(aLStack192);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

