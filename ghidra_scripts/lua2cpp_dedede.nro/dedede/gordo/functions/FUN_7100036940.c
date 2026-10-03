
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100036940(L2CAgent *param_1,undefined8 param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundTouchFlag GVar4;
  uint uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  float fVar10;
  undefined8 uVar11;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack224,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator==(aLStack224,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) goto LAB_7100036bf4;
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_DEDEDE_GORDO_STATUS_WORK_INT_BOUND_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack288);
  if ((uVar6 & 1) == 0) {
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    lib::L2CValue::operator=(aLStack272,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                              (param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    lib::L2CValue::operator=(aLStack240,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::operator&(aLStack224,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
LAB_7100036b8c:
      lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::operator&(aLStack224,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack288);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        uVar6 = lib::L2CValue::operator==(aLStack272,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::~L2CValue(aLStack288);
          goto LAB_7100036bec;
        }
      }
      lib::L2CValue::L2CValue(aLStack304,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_BOUND);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) goto LAB_7100036bf4;
      lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator&(aLStack224,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        GVar4 = lib::L2CValue::as_integer(aLStack224);
        bVar2 = app::lua_bind::GroundModule__is_attachable_impl(param_1->moduleAccessor,GVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,0xbbd93727c);
          lib::L2CValue::L2CValue(aLStack320,0x97ffb6297);
          uVar6 = lib::L2CValue::as_integer(aLStack304);
          param_3 = (L2CValue *)lib::L2CValue::as_integer(aLStack320);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                            (param_1->moduleAccessor,uVar6,(ulong)param_3);
          lib::L2CValue::L2CValue(aLStack288,iVar3);
          lib::L2CValue::L2CValue(aLStack80,100.0);
          lib::L2CValue::operator/(aLStack288,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::operator=(aLStack160,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::L2CValue(aLStack96,0x66933a7e6);
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          fVar10 = (float)app::sv_math::randf(HVar7,1.0);
          lib::L2CValue::L2CValue(aLStack80,fVar10);
          lib::L2CValue::operator=(aLStack192,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack96);
          uVar6 = lib::L2CValue::operator<=(aLStack192,aLStack160);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack336,_WEAPON_DEDEDE_GORDO_STATUS_KIND_WALL_STOP);
            lib::L2CValue::L2CValue(aLStack352,false);
            lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
            lib::L2CValue::~L2CValue(aLStack352);
            pLVar9 = aLStack336;
            goto LAB_7100036bf0;
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_DOWN);
      lib::L2CValue::operator&(aLStack224,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_UP);
        lib::L2CValue::operator&(aLStack224,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_GROUND_TOUCH_FLAG_UP);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          pfVar8 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                      (param_1->moduleAccessor,uVar5);
          lib::L2CValue::L2CValue(aLStack448,*pfVar8);
          lib::L2CValue::L2CValue(aLStack432,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack80,aLStack448);
          lib::L2CValue::L2CValue(aLStack96,aLStack432);
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack432);
          lib::L2CValue::~L2CValue(aLStack448);
          lib::L2CValue::~L2CValue(aLStack304);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::operator=(aLStack112,pLVar9);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack128,pLVar9);
          fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,fVar10);
          lib::L2CValue::operator=(aLStack144,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack320,_GROUND_TOUCH_FLAG_UP);
          uVar5 = lib::L2CValue::as_integer(aLStack320);
          uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar5)
          ;
          lib::L2CValue::L2CValue(aLStack480,(float)uVar11);
          lib::L2CValue::L2CValue(aLStack464,(float)((ulong)uVar11 >> 0x20));
          lib::L2CValue::L2CValue(aLStack80,aLStack480);
          lib::L2CValue::L2CValue(aLStack96,aLStack464);
          param_3 = aLStack96;
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack464);
          lib::L2CValue::~L2CValue(aLStack480);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
          lib::L2CValue::operator=(aLStack176,pLVar9);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack208,pLVar9);
          goto LAB_71000376dc;
        }
        lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::operator&(aLStack224,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,_GROUND_TOUCH_FLAG_LEFT);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          pfVar8 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                      (param_1->moduleAccessor,uVar5);
          lib::L2CValue::L2CValue(aLStack512,*pfVar8);
          lib::L2CValue::L2CValue(aLStack496,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack80,aLStack512);
          lib::L2CValue::L2CValue(aLStack96,aLStack496);
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack496);
          lib::L2CValue::~L2CValue(aLStack512);
          lib::L2CValue::~L2CValue(aLStack304);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::operator=(aLStack112,pLVar9);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack128,pLVar9);
          fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,fVar10);
          lib::L2CValue::operator=(aLStack144,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack320,_GROUND_TOUCH_FLAG_LEFT);
          uVar5 = lib::L2CValue::as_integer(aLStack320);
          uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar5)
          ;
          lib::L2CValue::L2CValue(aLStack544,(float)uVar11);
          lib::L2CValue::L2CValue(aLStack528,(float)((ulong)uVar11 >> 0x20));
          lib::L2CValue::L2CValue(aLStack80,aLStack544);
          lib::L2CValue::L2CValue(aLStack96,aLStack528);
          param_3 = aLStack96;
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack528);
          lib::L2CValue::~L2CValue(aLStack544);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
          lib::L2CValue::operator=(aLStack176,pLVar9);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack208,pLVar9);
          goto LAB_71000376dc;
        }
        lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT);
        lib::L2CValue::operator&(aLStack224,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_RIGHT);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          pfVar8 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                      (param_1->moduleAccessor,uVar5);
          lib::L2CValue::L2CValue(aLStack576,*pfVar8);
          lib::L2CValue::L2CValue(aLStack560,pfVar8[1]);
          lib::L2CValue::L2CValue(aLStack80,aLStack576);
          lib::L2CValue::L2CValue(aLStack96,aLStack560);
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack560);
          lib::L2CValue::~L2CValue(aLStack576);
          lib::L2CValue::~L2CValue(aLStack304);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
          lib::L2CValue::operator=(aLStack112,pLVar9);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack128,pLVar9);
          fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,fVar10);
          lib::L2CValue::operator=(aLStack144,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack320,GROUND_TOUCH_FLAG_RIGHT);
          uVar5 = lib::L2CValue::as_integer(aLStack320);
          uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar5)
          ;
          lib::L2CValue::L2CValue(aLStack608,(float)uVar11);
          lib::L2CValue::L2CValue(aLStack592,(float)((ulong)uVar11 >> 0x20));
          lib::L2CValue::L2CValue(aLStack80,aLStack608);
          lib::L2CValue::L2CValue(aLStack96,aLStack592);
          param_3 = aLStack96;
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::~L2CValue(aLStack320);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
          lib::L2CValue::operator=(aLStack176,pLVar9);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
          lib::L2CValue::operator=(aLStack208,pLVar9);
          goto LAB_71000376dc;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer(aLStack304);
        pfVar8 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                    (param_1->moduleAccessor,uVar5);
        lib::L2CValue::L2CValue(aLStack384,*pfVar8);
        lib::L2CValue::L2CValue(aLStack368,pfVar8[1]);
        lib::L2CValue::L2CValue(aLStack80,aLStack384);
        lib::L2CValue::L2CValue(aLStack96,aLStack368);
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack304);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
        lib::L2CValue::operator=(aLStack112,pLVar9);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
        lib::L2CValue::operator=(aLStack128,pLVar9);
        fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::operator=(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack320,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer(aLStack320);
        uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar5);
        lib::L2CValue::L2CValue(aLStack416,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar11 >> 0x20));
        lib::L2CValue::L2CValue(aLStack80,aLStack416);
        lib::L2CValue::L2CValue(aLStack96,aLStack400);
        param_3 = aLStack96;
        lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb0,SUB81(param_3,0));
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack400);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue(aLStack320);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x18cdc1683);
        lib::L2CValue::operator=(aLStack176,pLVar9);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack304,0x1fbdb2615);
        lib::L2CValue::operator=(aLStack208,pLVar9);
LAB_71000376dc:
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
      }
      lib::L2CValue::operator-(aLStack176);
      lib::L2CAgent::math_atan((L2CAgent *)aLStack96,aLStack208,param_3);
      lib::L2CValue::operator=(aLStack256,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,0x18b78d41a0);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack128);
      lib::L2CAgent::push_lua_stack(param_1,aLStack144);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack96);
      goto LAB_7100036ac4;
    }
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar6 = lib::L2CValue::operator==(aLStack272,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_7100036b8c;
LAB_7100036bec:
    pLVar9 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DEDEDE_GORDO_STATUS_WORK_FLAG_REMOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
LAB_7100036ac4:
    pLVar9 = aLStack80;
  }
LAB_7100036bf0:
  lib::L2CValue::~L2CValue(pLVar9);
LAB_7100036bf4:
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

