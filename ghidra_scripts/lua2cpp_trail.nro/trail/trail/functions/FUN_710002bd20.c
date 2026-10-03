
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710002bd20(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue LVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40MapEntry ***pppHVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  Hash40MapEntry **appHStack464 [2];
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
  Hash40MapEntry **appHStack208 [2];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  Hash40MapEntry **appHStack144 [2];
  Hash40MapEntry **local_80;
  ulong uStack120;
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_ATTACK_COUNT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  ppBVar13 = &this->moduleAccessor;
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
  lib::L2CValue::L2CValue(aLStack160,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)appHStack144,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_BUTTON);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)appHStack144,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
    uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
      lVar20 = -0xa0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,CONTROL_PAD_BUTTON_SPECIAL);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      bVar3 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((bVar2 & 1U) == 0) goto LAB_710002bf30;
      lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar4);
      lVar20 = -0x70;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar20));
  }
LAB_710002bf30:
  bVar3 = app::lua_bind::MotionModule__is_end_impl(*ppBVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  LVar1 = SUB81(&stack0xfffffffffffffff0,0);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)appHStack208,0xaa5d51ffa);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack176,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
    lib::L2CValue::operator-(aLStack176,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    uVar7 = lib::L2CValue::operator<=((L2CValue *)appHStack144,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)appHStack144,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack176,false);
      fVar14 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack256,fVar14);
      fVar14 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack272,fVar14);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)((char)LVar1 + '\x10'),LVar1);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack288,aLStack192);
      lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xe0);
      lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack320,0xc7b8ee93b);
      uVar7 = lib::L2CValue::as_integer(aLStack304);
      uVar8 = lib::L2CValue::as_integer(aLStack320);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)appHStack208,fVar14);
      uVar7 = lib::L2CValue::operator<=((L2CValue *)appHStack208,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue(aLStack288);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack304,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
        iVar4 = lib::L2CValue::as_integer(aLStack304);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)appHStack208,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
        uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack208,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_SEARCH)
          ;
          lib::L2CValue::operator=((L2CValue *)appHStack144,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
          lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          uVar7 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          if ((uVar7 & 1) != 0) {
            FUN_7100027580(this);
          }
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        uVar7 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) != 0) {
          FUN_7100027580(this);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_SEARCH);
        lib::L2CValue::operator=((L2CValue *)appHStack144,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
        lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      }
      lib::L2CValue::L2CValue(aLStack336,(L2CValue *)appHStack144);
      lib::L2CValue::L2CValue(aLStack352,aLStack176);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lVar20 = -0x80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)((char)LVar1 + '0'),(L2CValue)((char)LVar1 + ' '));
      lib::L2CValue::~L2CValue(aLStack240);
      lVar20 = -0xd0;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar20));
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710002d374;
  }
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar13);
  lib::L2CValue::L2CValue((L2CValue *)appHStack144,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
  if ((uVar7 & 1) != 0) {
    iVar4 = app::lua_bind::GroundModule__get_touch_flag_impl(*ppBVar13);
    lib::L2CValue::L2CValue(aLStack176,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::operator&(aLStack176,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    bVar3 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack192,(bool)(~bVar3 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar7 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)appHStack208,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TOUCH_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)appHStack144,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
      uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)appHStack208);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
        uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _GROUND_TOUCH_FLAG_LEFT | _GROUND_TOUCH_FLAG_UP | GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::operator&(aLStack176,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_80,_GROUND_TOUCH_FLAG_UP);
            lib::L2CValue::operator&(aLStack176,(L2CValue *)&local_80);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
            uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_80,_GROUND_TOUCH_FLAG_UP);
              lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_80);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_80,_GROUND_TOUCH_FLAG_LEFT);
              lib::L2CValue::operator&(aLStack176,(L2CValue *)&local_80);
              lib::L2CValue::~L2CValue((L2CValue *)&local_80);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
              uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
              lib::L2CValue::~L2CValue((L2CValue *)&local_80);
              lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_80,_GROUND_TOUCH_FLAG_LEFT);
                lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_80);
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_TOUCH_FLAG_RIGHT);
                lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_80);
              }
            }
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1735e7956a);
            lib::L2CValue::operator=((L2CValue *)appHStack208,(L2CValue *)&local_80);
            goto LAB_710002c8ec;
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,GROUND_TOUCH_FLAG_DOWN);
          lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0x15db4a5e9f);
          lib::L2CValue::operator=((L2CValue *)appHStack208,(L2CValue *)&local_80);
LAB_710002c8ec:
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        }
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        uVar19 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack416,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack416);
        lib::L2CValue::L2CValue((L2CValue *)appHStack144,aLStack400);
        lua2cpp::L2CFighterBase::Vector2__create
                  (this,(L2CValue)((char)LVar1 + -0x70),(L2CValue)((char)LVar1 + -0x80));
        lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack320);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar13,uVar6);
        lib::L2CValue::L2CValue(aLStack448,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack432,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack448);
        lib::L2CValue::L2CValue((L2CValue *)appHStack144,aLStack432);
        lua2cpp::L2CFighterBase::Vector2__create
                  (this,(L2CValue)((char)LVar1 + -0x70),(L2CValue)((char)LVar1 + -0x80));
        lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack448);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x18cdc1683);
        pLVar12 = (L2CValue *)0x1fbdb2615;
        this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack320,0x1fbdb2615);
        fVar14 = (float)lib::L2CValue::as_number(pLVar10);
        fVar15 = (float)lib::L2CValue::as_number(pLVar11);
        fVar16 = (float)lib::L2CValue::as_number(this_01);
        fVar17 = (float)lib::L2CValue::as_number(this_02);
        fVar14 = (float)app::sv_math::vec2_angle(fVar14,fVar15,fVar16,fVar17);
        lib::L2CValue::L2CValue((L2CValue *)appHStack144,fVar14);
        lib::L2CAgent::math_deg((L2CAgent *)appHStack144,pLVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,90.0);
        lib::L2CValue::operator-(aLStack480,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack496,0xfea97fe73);
        uVar7 = lib::L2CValue::as_integer(aLStack496);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar7,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar14);
        uVar7 = lib::L2CValue::operator<((L2CValue *)&local_80,(L2CValue *)appHStack464);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::~L2CValue((L2CValue *)appHStack464);
        lib::L2CValue::~L2CValue(aLStack480);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)appHStack464,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME
                    );
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack464);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
          lib::L2CValue::~L2CValue((L2CValue *)appHStack464);
          pppHVar9 = &local_80;
LAB_710002cd34:
          lib::L2CValue::~L2CValue((L2CValue *)pppHVar9);
        }
        else {
          pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,8);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
          uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME)
            ;
            iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)appHStack464,iVar4);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue(aLStack480,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack496,0x1b949b05bc);
            uVar7 = lib::L2CValue::as_integer(aLStack480);
            uVar8 = lib::L2CValue::as_integer(aLStack496);
            iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar8);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
            uVar7 = lib::L2CValue::operator<=((L2CValue *)&local_80,(L2CValue *)appHStack464);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::~L2CValue(aLStack496);
            lib::L2CValue::~L2CValue(aLStack480);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack512,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_END);
              lib::L2CValue::L2CValue(aLStack528,false);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
              lib::L2CValue::~L2CValue(aLStack528);
              lib::L2CValue::~L2CValue(aLStack512);
              lib::L2CValue::L2CValue((L2CValue *)return_value,0);
              lib::L2CValue::~L2CValue((L2CValue *)appHStack464);
              lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::~L2CValue(aLStack304);
              lVar20 = -0xc0;
              goto LAB_710002ccd0;
            }
            lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
            lib::L2CValue::operator+((L2CValue *)appHStack464,(L2CValue *)&local_80);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME)
            ;
            iVar4 = lib::L2CValue::as_integer(aLStack480);
            iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
            lib::L2CValue::~L2CValue((L2CValue *)&local_80);
            lib::L2CValue::~L2CValue(aLStack480);
            pppHVar9 = appHStack464;
            goto LAB_710002cd34;
          }
        }
        lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        pppHVar9 = appHStack208;
        goto LAB_710002cd54;
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,
                 _GROUND_TOUCH_FLAG_LEFT | _GROUND_TOUCH_FLAG_UP | GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::operator&(aLStack176,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      uVar7 = lib::L2CValue::operator==((L2CValue *)appHStack144,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)appHStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack144);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
        goto LAB_710002c164;
      }
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)appHStack144,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)appHStack208,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack304,0x1b949b05bc);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
        uVar8 = lib::L2CValue::as_integer(aLStack304);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        uVar7 = lib::L2CValue::operator<=((L2CValue *)&local_80,(L2CValue *)appHStack144);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
          lib::L2CValue::operator+((L2CValue *)appHStack144,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
          pppHVar9 = appHStack144;
          goto LAB_710002cd54;
        }
        lib::L2CValue::L2CValue(aLStack368,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack384,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lVar20 = -0x80;
LAB_710002ccd0:
        lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar20));
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        goto LAB_710002d374;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)appHStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_TOUCH_GROUND_FRAME);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack144);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar13,iVar4,iVar5);
LAB_710002c164:
      lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
      pppHVar9 = &local_80;
LAB_710002cd54:
      lib::L2CValue::~L2CValue((L2CValue *)pppHVar9);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar7 = lib::L2CValue::operator<((L2CValue *)&local_80,aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar7 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) == 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) == 0) goto LAB_710002ced8;
LAB_710002cf48:
        lib::L2CValue::L2CValue(aLStack608,0xb9afea4ec);
        lib::L2CValue::L2CValue(aLStack624,0xf6d6ca1db);
        lib::L2CValue::L2CValue(aLStack640,true);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                  (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::L2CValue(aLStack656,false);
        FUN_710002b880(this);
        lib::L2CValue::~L2CValue(aLStack656);
        FUN_710002ba70(this);
      }
      else {
LAB_710002ced8:
        pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) == 0) {
          pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          if ((uVar7 & 1) != 0) goto LAB_710002cf48;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)appHStack144,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TOUCH_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)appHStack144);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
      uVar7 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack544,aLStack160);
        lib::L2CValue::L2CValue(aLStack560,true);
        lib::L2CValue::L2CValue(aLStack576,aLStack192);
        FUN_710002afb0(this,aLStack544,aLStack560,aLStack576);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::~L2CValue(aLStack544);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TOUCH_GROUND);
        bVar3 = lib::L2CValue::as_bool(aLStack192);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_flag_impl(*ppBVar13,(bool)(bVar3 & 1),iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      }
    }
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
  uVar7 = lib::L2CValue::operator<((L2CValue *)&local_80,aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)appHStack208,0xaa5d51ffa);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack176,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
    lib::L2CValue::operator-(aLStack176,(L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    uVar7 = lib::L2CValue::operator<(aLStack160,(L2CValue *)appHStack144);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,
                 _FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_GUIDE_EFFECT_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar4);
      lib::L2CValue::L2CValue(aLStack176,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar7 = lib::L2CValue::operator==(pLVar10,(L2CValue *)&local_80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        uVar7 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_80);
        lib::L2CValue::~L2CValue((L2CValue *)&local_80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)appHStack208,
                     _FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_GUIDE_EFFECT_ANGLE_ATTACK);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)appHStack208);
          fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar4);
          lib::L2CValue::L2CValue(aLStack736,fVar14);
          FUN_7100028280(aLStack720,this,aLStack736);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack720);
          lib::L2CValue::L2CValue((L2CValue *)appHStack144,aLStack704);
          lua2cpp::L2CFighterBase::Vector2__create
                    (this,(L2CValue)((char)LVar1 + -0x70),(L2CValue)((char)LVar1 + -0x80));
          lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
          lib::L2CValue::~L2CValue((L2CValue *)&local_80);
          lib::L2CValue::~L2CValue(aLStack704);
          lib::L2CValue::~L2CValue(aLStack720);
          lib::L2CValue::~L2CValue(aLStack736);
          lib::L2CValue::~L2CValue((L2CValue *)appHStack208);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
          pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)appHStack144,0.0);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          uVar7 = lib::L2CValue::as_number(pLVar10);
          lVar20 = lib::L2CValue::as_number(pLVar11);
          uVar18 = lib::L2CValue::as_number((L2CValue *)appHStack144);
          local_80 = (Hash40MapEntry **)(uVar7 & 0xffffffff | lVar20 << 0x20);
          uStack120 = (ulong)uVar18;
          app::lua_bind::EffectModule__set_pos_impl(*ppBVar13,uVar6,(Vector3f *)&local_80);
          lib::L2CValue::~L2CValue((L2CValue *)appHStack144);
          pLVar10 = aLStack192;
          goto LAB_710002d2d4;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack672,aLStack176);
        lib::L2CValue::L2CValue
                  (aLStack688,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_GUIDE_EFFECT_ANGLE_ATTACK);
        FUN_7100027700(this,aLStack672,aLStack688);
        lib::L2CValue::~L2CValue(aLStack688);
        pLVar10 = aLStack672;
LAB_710002d2d4:
        lib::L2CValue::~L2CValue(pLVar10);
      }
      lib::L2CValue::~L2CValue(aLStack176);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
  uVar7 = lib::L2CValue::operator<((L2CValue *)&local_80,aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar4);
    lib::L2CValue::L2CValue(aLStack752,fVar14);
    lib::L2CValue::L2CValue(aLStack768,1.0);
    FUN_7100014fd0(this,aLStack752,aLStack768);
    lib::L2CValue::~L2CValue(aLStack768);
    lib::L2CValue::~L2CValue(aLStack752);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002d374:
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

