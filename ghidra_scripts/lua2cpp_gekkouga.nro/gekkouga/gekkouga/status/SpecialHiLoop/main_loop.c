
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHiLoop_main_loop(L2CFighterGekkouga *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack544 [16];
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
  undefined auStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::L2CValue(aLStack176,0);
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::L2CValue(aLStack304,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),fVar8);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),fVar8);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack304,_GROUND_TOUCH_FLAG_UP);
    uVar4 = lib::L2CValue::as_integer(aLStack304);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue(aLStack304);
    if ((bVar1 & 1U) == 0) {
LAB_7100027780:
      lib::L2CValue::L2CValue(aLStack352,GROUND_TOUCH_FLAG_RIGHT);
      uVar4 = lib::L2CValue::as_integer(aLStack352);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack352);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack240,GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack240);
        uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack304,(float)uVar12);
        lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar12 >> 0x20));
        lib::L2CValue::L2CValue(aLStack352,aLStack304);
        lib::L2CValue::L2CValue(aLStack96,aLStack288);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue((L2CValue *)auStack240);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
        lib::L2CValue::operator_(aLStack144,pLVar5);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack192,pLVar5);
        fVar8 = (float)lib::L2CValue::as_number(aLStack176);
        fVar9 = (float)lib::L2CValue::as_number(aLStack160);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        fVar11 = (float)lib::L2CValue::as_number(aLStack192);
        fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
        lib::L2CValue::L2CValue(aLStack352,fVar8);
        lib::L2CValue::operator_(aLStack128,aLStack352);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack320,0xa85612d80);
        uVar6 = lib::L2CValue::as_integer(aLStack272);
        uVar7 = lib::L2CValue::as_integer(aLStack320);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,iVar3);
        lib::L2CValue::L2CValue(aLStack352,90.0);
        pLVar5 = aLStack352;
        lib::L2CValue::operator_((L2CValue *)auStack256,pLVar5);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CAgent::math_rad((L2CAgent *)auStack240,pLVar5);
        uVar6 = lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)auStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack272);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack352,-1.0);
          fVar8 = (float)lib::L2CValue::as_number(aLStack352);
          app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar8);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack352,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_WALL_DAMAGE);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::L2CValue(aLStack384,1);
          lib::L2CValue::_L2CValue(aLStack112);
          goto LAB_7100027d24;
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack352,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack352);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,_GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack352,(float)uVar12);
        lib::L2CValue::L2CValue(aLStack336,(float)((ulong)uVar12 >> 0x20));
        lib::L2CValue::L2CValue(aLStack96,aLStack352);
        lib::L2CValue::L2CValue(aLStack112,aLStack336);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack240,0x18cdc1683);
        lib::L2CValue::operator_(aLStack144,pLVar5);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack240,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack192,pLVar5);
        fVar8 = (float)lib::L2CValue::as_number(aLStack176);
        fVar9 = (float)lib::L2CValue::as_number(aLStack160);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        fVar11 = (float)lib::L2CValue::as_number(aLStack192);
        fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack320,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack368,0xa85612d80);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        uVar7 = lib::L2CValue::as_integer(aLStack368);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack272,iVar3);
        lib::L2CValue::L2CValue(aLStack96,90.0);
        pLVar5 = aLStack96;
        lib::L2CValue::operator_(aLStack272,pLVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar5);
        uVar6 = lib::L2CValue::operator_(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack320);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,1.0);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar8);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_WALL_DAMAGE);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack384,1);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          goto LAB_7100027d24;
        }
        lib::L2CValue::_L2CValue((L2CValue *)auStack240);
      }
      lib::L2CValue::L2CValue(aLStack384,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_UP);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),(float)uVar12);
      lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar12 >> 0x20));
      lib::L2CValue::L2CValue(aLStack304,(L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::L2CValue(aLStack352,aLStack208);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
      lib::L2CValue::operator_(aLStack144,pLVar5);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack192,pLVar5);
      fVar8 = (float)lib::L2CValue::as_number(aLStack176);
      fVar9 = (float)lib::L2CValue::as_number(aLStack160);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      fVar11 = (float)lib::L2CValue::as_number(aLStack192);
      fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
      lib::L2CValue::L2CValue(aLStack304,fVar8);
      lib::L2CValue::operator_(aLStack128,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack272,0xa85612d80);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar3);
      lib::L2CValue::L2CValue(aLStack304,90.0);
      pLVar5 = aLStack304;
      lib::L2CValue::operator_((L2CValue *)auStack240,pLVar5);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CAgent::math_rad((L2CAgent *)aLStack112,pLVar5);
      uVar6 = lib::L2CValue::operator_(aLStack352,aLStack128);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)auStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        goto LAB_7100027780;
      }
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack352,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack384,1);
      lib::L2CValue::_L2CValue(aLStack96);
    }
LAB_7100027d24:
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::L2CValue
              (aLStack352,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_MOVE_TIME_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack304,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0);
    uVar6 = lib::L2CValue::operator_(aLStack304,(L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack352);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack304,
                   _FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_DIRECTION_EFFECT_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),iVar3);
        lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack112,0x1b10b7abec);
        uVar6 = lib::L2CValue::as_integer(aLStack96);
        uVar7 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack352,iVar3);
        uVar6 = lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),aLStack352);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
        lib::L2CValue::_L2CValue(aLStack304);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack352,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_MOVE_TIME_COUNTER)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack352);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack304,iVar3);
          lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack128,0x1d01b46e32);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          uVar7 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          uVar6 = lib::L2CValue::operator_(aLStack304,aLStack96);
          if ((uVar6 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack160,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
            iVar3 = lib::L2CValue::as_integer(aLStack160);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack144,iVar3);
            lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),1);
            uVar6 = lib::L2CValue::operator_(aLStack144,(L2CValue *)(auStack240 + 0x10));
            uVar6 = uVar6 & 0xffffffff;
            lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
          }
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack352);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),false);
            lib::L2CValue::L2CValue(aLStack528,(L2CValue *)(auStack240 + 0x10));
            lib::L2CValue::L2CValue(aLStack544,false);
            FUN_7100028690(this,aLStack528,aLStack544);
            lib::L2CValue::_L2CValue(aLStack544);
            pLVar5 = aLStack528;
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),true);
            lib::L2CValue::L2CValue(aLStack496,(L2CValue *)(auStack240 + 0x10));
            lib::L2CValue::L2CValue(aLStack512,true);
            FUN_7100028690(this,aLStack496,aLStack512);
            lib::L2CValue::_L2CValue(aLStack512);
            pLVar5 = aLStack496;
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),false);
          lib::L2CValue::L2CValue(aLStack464,(L2CValue *)(auStack240 + 0x10));
          lib::L2CValue::L2CValue(aLStack480,true);
          FUN_7100028690(this,aLStack464,aLStack480);
          lib::L2CValue::_L2CValue(aLStack480);
          pLVar5 = aLStack464;
        }
        lib::L2CValue::_L2CValue(pLVar5);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
        iVar3 = 0;
        goto LAB_7100027e74;
      }
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack448,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack448);
      pLVar5 = aLStack432;
    }
    else {
      lib::L2CValue::L2CValue(aLStack400,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack416,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack416);
      pLVar5 = aLStack400;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
  iVar3 = 1;
LAB_7100027e74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

